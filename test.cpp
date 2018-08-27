#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
int main(int argc, char** argv )
{
    std::cout<<"!111"<<std::endl;
    Mat image;
    std::cout<<image.channels()<<std::endl;
    imshow("Display Image", image);
    waitKey(0);
    return 0;
}


