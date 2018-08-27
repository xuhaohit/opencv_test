#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
int main(int argc, char** argv )
{
    std::cout<<"!111"<<std::endl;
:qw

    //VideoCapture capture(0);
    Mat image;
    /*while(true){
     
      capture>>image;

      
   }*/
    //  /home/sima/data/drive_area/seg_gt/0000000000_idx.png
    image = imread( "../1.png",-1);
    std::cout<<image.channels()<<std::endl;
    imshow("Display Image", image);
    image.
    waitKey(0);
    return 0;
}


