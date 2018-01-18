#include <iostream>
#include <stdio.h>

#include <opencv2/objdetect.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>


using namespace std;
using namespace cv;

void detectAndDisplay(Mat& frame);

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
		 Point center( objs[i].x + objs[i].width/2, objs[i].y + objs[i].height/2 );
		 ellipse( frame, center, Size( objs[i].width/2, objs[i].height/2), 0, 0, 360, Scalar( 255, 0, 255 ), 4, 8, 0 );
	}

	imshow( window_name, frame );
}
