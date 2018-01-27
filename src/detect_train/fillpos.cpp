#include <iostream>
#include <cstdio>
#include <fstream>

#include <opencv2/imgproc.hpp>

using namespace cv;
using namespace std;



int main(int argc, const char** argv)
{
	ifstream input(argv[1]);
	string s;

	while (getline(input, s))
	{
		cout << s << endl;
	}
	input.close();
	return 0;
}
