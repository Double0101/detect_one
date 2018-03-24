//
// Created by Double on 13/03/2018.
//

#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char** argv)
{
    if ( argc != 3 )
    {
        std::cout << "-----# argument failure #-----" << std::endl;
    }
    Mat image = imread(argv[1], 1);
    Mat dst = image.clone();
    equalizeHist(image, dst);
    imshow("dsfdsf", image);
    waitKey(0);
    imwrite(argv[2], dst);
    return 0;
}