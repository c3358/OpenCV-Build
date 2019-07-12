
/*
������������:
0.��ƽ̨�޸�Ϊx64����Ϊû���ṩx86�Ŀ��ļ�����Ȼ�����Լ�������������ﲻ����ˣ�
1.��OpenCV��include���Ƶ�����Ŀ·���£��޸�ΪOpenCV-include��Ȼ����ӽ������ļ�
2.��OpenCV��x64���Ƶ�����Ŀ·���£��޸�ΪOpenCV-lib-x64��Ȼ����ӽ���Ŀ¼
3.��opencv_world410d.dll���Ƴ����������и�d�����debug�汾��
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