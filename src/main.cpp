#include "opencv2/opencv.hpp"

using namespace cv;

int main(int, char** argv)
{
    VideoCapture cap(0); // open the default camera
    if(!cap.isOpened()) {
      std::cerr << "Couldn't open video stream" << std::endl;
      return -1;
    }

    namedWindow("Capture", WINDOW_NORMAL);
    char key = 0;
    while (key != 27 /*ESC*/)
    {
        Mat frame;
        cap >> frame; // get a new frame from camera
        imshow("edges", frame);
        key = waitKey(30);
    }

    return 0;
}
