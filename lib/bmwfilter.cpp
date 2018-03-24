//
// Created by Double on 19/03/2018.
//
#include "bmwfilter.hpp"

using namespace cv;
using namespace std;

bool BmwFilter::filter(cv::Mat &frame)
{
    if (checkColor(frame) <= m_Threshold) return true;
    return false;
}

float BmwFilter::checkColor(cv::Mat& frame)
{
    vector<Mat> channels;
    Mat copy = frame.clone();
    resize(copy, copy, Size(200, 200));
    split(copy, channels);
    for (int i = 0; i < channels.size(); ++i)
    {
        equalizeHist(channels[i], channels[i]);
    }
    cv::Mat h_frame;
    merge(channels, h_frame);
    Mat b_hist = m_ColHistogram.getHistogram(h_frame, 0);
    float* distance1 = getHistNorm(b_hist, 0);
    Mat g_hist = m_ColHistogram.getHistogram(h_frame, 1);
    float* distance2 = getHistNorm(g_hist, 1);
    Mat r_hist = m_ColHistogram.getHistogram(h_frame, 2);
    float* distance3 = getHistNorm(r_hist, 2);
    float sum = min(distance1[0] + distance2[0] + distance3[0], distance1[1] + distance2[1] + distance3[1]);

    cout << sum << endl;
    return sum;
}

float* BmwFilter::getHistNorm(Mat& hist, int channel) {
    ColHistogram colHistogram(16, 16, 16);
    Mat logo1 = imread("/Users/Double/Desktop/black.jpg", 1);
    Mat bmw1 = colHistogram.getHistogram(logo1, channel);

    Mat logo2 = imread("/Users/Double/Desktop/white.jpg", 1);
    Mat bmw2 = colHistogram.getHistogram(logo2, channel);

    double a = norm(hist, bmw1);
    double b = norm(hist, bmw2);

    float* result = (float*) malloc(2 * sizeof(float));
    result[0] = a; result[1] = b;
    return result;
}
