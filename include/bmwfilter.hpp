//
// Created by Double on 13/03/2018.
//

#ifndef DETECT_ONE_COLORFILTER_HPP
#define DETECT_ONE_COLORFILTER_HPP

#include "filter.hpp"
#include "histogram.hpp"
#include <opencv2/opencv.hpp>

class BmwFilter : FilterInterface
{
public:
    virtual float filter(cv::Mat& frame);
    BmwFilter(int bbins = 16, int gbins = 16, int rbins = 16) : m_ColHistogram(bbins, gbins, rbins) { };
    float m_Threshold = 2800.f;
private:
    ColHistogram m_ColHistogram;
    float checkColor(cv::Mat& frame);
    float* getHistNorm(cv::Mat& frame, int channel);
};
#endif //DETECT_ONE_COLORFILTER_HPP
