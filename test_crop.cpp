#include <opencv2/highgui.hpp>
#include <iostream>
using namespace cv;

int main(int argc, char* argv[])
{
    //read file
    Mat img = imread("Test.JPG");

    // error handling
    if (img.empty())
    {
        std::cout << "Image File Not Found" << std::endl;;
        return -1;
    }

    // Add a white border around the cropped image
    int border = 25;
    copyMakeBorder(img, img, border, border, border, border, BORDER_CONSTANT, Scalar(255, 255, 255));

    imshow("photo!", img);
    waitKey(5000);

    imwrite( "final.jpg", img);
    return 0;
}
