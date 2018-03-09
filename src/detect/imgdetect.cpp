#include <iostream>
#include <cstdio>

#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int checkColor(Mat& frame);
void detectAndDisplay(Mat& frame);
void detect(Mat frame, Mat& frame_gray, int flags);

CascadeClassifier obj_cascade;

string window_name = "image detect";
string obj_classifier_name = "/Users/Double/workspace/Projects/cheguo/detect_one/build/bin/data/cascade.xml";

const int DETECTWITHCOLOR = 1;

int main(int argc, const char** argv)
{
    Mat src = imread( argv[1], 1 );
    if ( argc > 2 ) { obj_classifier_name = argv[2]; }
    if ( !obj_cascade.load( obj_classifier_name ) ) { printf("--(!)Error loading cascade\n"); return -1; }

	// TODO scale frame
	double scale = min(1000.f / src.cols, 1000.f / src.rows);
	resize(src, src, Size(src.cols * scale, src.rows * scale));
    detectAndDisplay( src );
    return 0;
}

void detectAndDisplay(Mat& frame)
{
    Mat frame_gray;
    cvtColor( frame, frame_gray, COLOR_BGR2GRAY );
    equalizeHist( frame_gray, frame_gray );
    Mat frame_copy = frame.clone();
    detect(frame, frame_gray, 0);
    while (1)
    {
        char key = waitKey(10);
        if (key == 'c')
        {
            cout << "detect with color filter" << endl;
            destroyWindow(window_name);
            detect(frame_copy, frame_gray, 1);
            break;
        }
        if (key == 'q') break;
    }
    waitKey(0);
}

int checkColor(Mat& frame)
{
    int count = 0;
    vector<Mat> channels;
    split( frame, channels );

    int num_row = frame.rows;
    int num_col = frame.cols;

    for (int r = 0; r < num_row; ++r)
    {
        const uchar* r_b = channels[0].ptr<const uchar>(r);
        const uchar* r_g = channels[1].ptr<const uchar>(r);
        const uchar* r_r = channels[2].ptr<const uchar>(r);
        for (int c = 0; c < num_col; ++c)
            if ( r_g[c] + 2 * r_r[c] <= 2 * r_b[c] )
                ++count;
    }
    return ( (float) count / ( num_col * num_row ) > 0.09f ) ? 1 : 0;
}

void detect(Mat frame, Mat& frame_gray, int flags)
{
    vector<Rect> objs;
    obj_cascade.detectMultiScale( frame_gray, objs, 1.1, 2, 0|CASCADE_SCALE_IMAGE, Size(30, 30) );

    if (flags == DETECTWITHCOLOR)
    {
        for (size_t i = 0; i < objs.size(); ++i)
        {
            // TODO size filter
            if (objs[i].width <= 100)
            {
                Mat roi(frame, objs[i]);
                if (checkColor(roi) == 1)
                {
                    Point center(objs[i].x + objs[i].width / 2, objs[i].y + objs[i].height / 2);
                    ellipse(frame, center, Size(objs[i].width / 2, objs[i].height / 2),
                            0, 0, 360, Scalar(255, 0, 255), 4, 8, 0);
                }
            }
        }
    }
    else
    {
        for (size_t i = 0; i < objs.size(); ++i)
        {
            // TODO size filter
            if (objs[i].width <= 100)
            {
                Mat roi(frame, objs[i]);
                Point center(objs[i].x + objs[i].width / 2, objs[i].y + objs[i].height / 2);
                ellipse(frame, center, Size(objs[i].width / 2, objs[i].height / 2),
                        0, 0, 360, Scalar(255, 0, 255), 4, 8, 0);
            }
        }
    }

    imshow(window_name, frame);
}
