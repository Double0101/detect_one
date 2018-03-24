//
// Created by Double on 13/03/2018.
//

#ifndef DETECT_ONE_FILTER_HPP
#define DETECT_ONE_FILTER_HPP

#include <opencv2/opencv.hpp>

class FilterInterface
{
public:
    virtual bool filter(cv::Mat &frame) = 0;
    virtual ~FilterInterface() { };
    FilterInterface() = default;
private:
};

#endif //DETECT_ONE_FILTER_HPP
