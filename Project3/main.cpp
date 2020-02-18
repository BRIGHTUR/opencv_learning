#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
int main()
{
	Mat img = imread("D:/360MoveData/Users/BRIGHT/Desktop/TIMͼƬ20200217180615.jpg");
	imshow("test", img);
	waitKey(0);
	return 0;
}