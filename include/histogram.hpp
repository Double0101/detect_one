//
// Created by Double on 12/03/2018.
//

#ifndef DETECT_ONE_HISTOGRAM_HPP
#define DETECT_ONE_HISTOGRAM_HPP

#include <opencv2/opencv.hpp>

class ColHistogram
{
private:
    const int channels[3] = { 0, 1, 2 };
    int histSize[3];
    float branges[2];
    float granges[2];
    float rranges[2];
    const float *ranges[3];
public:
    ColHistogram(int bbins = 32, int gbins = 32, int rbins = 32);
    cv::Mat getHistogram(const cv::Mat &image, int channel);
};

#endif //DETECT_ONE_HISTOGRAM_HPP
