//
//reated by Double on 12/03/2018.
//

#include "histogram.hpp"

ColHistogram::ColHistogram(int bbins, int gbins, int rbins)
{
    histSize[0] = bbins;
    histSize[1] = gbins;
    histSize[2] = rbins;
    branges[0] = granges[0] = rranges[0] = 0;
    branges[1] = bbins;
    granges[1] = gbins;
    rranges[1] = rbins;
    ranges[0] = branges;
    ranges[1] = granges;
    ranges[2] = rranges;
}

cv::Mat ColHistogram::getHistogram(const cv::Mat &image, int channel)
{
    cv::Mat hist;
    cv::calcHist(&image, 1, &channels[channel], cv::Mat(),
             hist, 1, &histSize[channel], &ranges[channel], true, false);
    return hist;
}