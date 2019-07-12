
/*
基本配置如下:
0.将平台修改为x64（因为没有提供x86的苦文件，当然可以自己编译出来，这里不想搞了）
1.将OpenCV的include复制到本项目路径下，修改为OpenCV-include，然后添加进包含文件
2.将OpenCV的x64复制到本项目路径下，修改为OpenCV-lib-x64，然后添加进库目录
3.将opencv_world410d.dll复制出来（后面有个d代表的debug版本）
*/

#include "opencv2/opencv.hpp"
#pragma comment(lib,"vc15/lib/opencv_world410d.lib")
using namespace cv;

int main(int argc, char* argv[])
{
	cv::String strImg = "H://111.bmp";
	cv::Mat img = cv::imread(strImg, -1);
	if (img.empty())
		return -1;
	cv::namedWindow("OpenCV-Build", cv::WINDOW_AUTOSIZE);
	cv::imshow("OpenCV-Build", img);
	cv::waitKey(0);
	cv::destroyWindow("OpenCV-Build");
	return 0;
}