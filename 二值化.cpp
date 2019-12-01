#include <iostream>
#include <opencv2/opencv.hpp>
#include <random>

using namespace std;
using namespace cv;

int main()
{
	Mat result;
	Mat src = imread("bag.png");
	threshold(src, result, 170, 255, CV_THRESH_BINARY);
	imshow("erzhi", result);
	return 0;
}