#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>

#include <opencv2/opencv.hpp>
#include "sample.hpp"

using namespace cv;
using namespace std;

void parsesample(const string&);
void sampleimgproc(SampleInfo&);

int main(int argc, const char** argv)
{
	ifstream input(argv[1]);
	string s;

	while (getline(input, s))
	{
		parsesample(s);
	}
	input.close();
	return 0;
}

void parsesample(const string& s)
{
	SampleInfo sample(s);
	sampleimgproc(sample);
}

void sampleimgproc(SampleInfo& possample)
{
	Mat img = imread(possample.getpath(), 1);
	vector<vector<int>> rects = possample.getRects();
	for (int i = 0; i < possample.getnum(); ++i)
	{
		rectangle(img, 
				Rect(rects[i][0],
					 rects[i][1],
					 rects[i][2],
					 rects[i][3]),
				Scalar(0, 0, 0),
				CV_FILLED, 8, 0);
	}
	imwrite(possample.getpath(), img);
}
