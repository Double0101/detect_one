#include <iostream>
#include <cstdio>

#include <opencv2/objdetect.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>


using namespace std;
using namespace cv;

void detectAndDisplay(Mat& frame);
int checkColor(Mat& frame);

CascadeClassifier obj_cascade;

string window_name = "object detection";
string obj_classifier_name = "data/cascade.xml";

int main()
{
	VideoCapture capture;
	Mat frame;

	if ( !obj_cascade.load( obj_classifier_name ) ) { printf("--(!)Error loading cascade\n"); return -1; }

	capture.open( 0 );
	if ( !capture.isOpened() ) { printf("--(!)Error opening video capture\n"); return -1; }

	while ( capture.read(frame) )
	{
		if ( frame.empty() )
		{
			printf("--(!)No capture frame --Break!");
			break;
		}

		detectAndDisplay( frame );
		int c = waitKey(10);
		if ( c == 27 ) { break; }
	}

	return 0;
}

void detectAndDisplay(Mat& frame)
{
	std::vector<Rect> objs;
	Mat frame_gray;
	cvtColor( frame, frame_gray, COLOR_BGR2GRAY );
	equalizeHist( frame_gray, frame_gray );

	obj_cascade.detectMultiScale( frame_gray, objs, 1.1, 2, 0|CASCADE_SCALE_IMAGE, Size(30, 30) );

	for ( size_t i = 0; i < objs.size(); ++i )
	{
		Mat roi( frame, objs[i] );
		// TODO color filter
		if ( checkColor(roi) == 1 )
		{
			Point center(objs[i].x + objs[i].width / 2, objs[i].y + objs[i].height / 2);
			ellipse(frame, center, Size(objs[i].width / 2, objs[i].height / 2), 0, 0, 360, Scalar(255, 0, 255), 4, 8, 0);
		}
	}
	imshow( window_name, frame );
}

int checkColor(Mat& frame)
{
	int count = 0;
	Mat hsv_img;
	hsv_img.create( frame.size(), frame.type() );
	cvtColor( frame, hsv_img, CV_BGR2HSV );
	vector<Mat> channels;
	split( hsv_img, channels );

	int num_row = frame.rows;
	int num_col = frame.cols;

	for (int r = 0; r < num_row; ++r)
	{
		const uchar* r_hue = channels[0].ptr<const uchar>(r);
		const uchar* r_satur = channels[1].ptr<const uchar>(r);
		const uchar* r_value = channels[2].ptr<const uchar>(r);
		for (int c = 0; c < num_col; ++c)
			if ( r_hue[c] >= 100 && r_hue[c] <= 124 ) ++count;
	}
	return ( (float) count / ( num_col * num_row ) > 0.08f ) ? 1 : 0;
}
