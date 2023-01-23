#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::Mat img = cv::imread("image.jpg");
    cv::cvtColor(img, img, cv::COLOR_BGR2GRAY);
    cv::Canny(img, img, 100, 200);
    cv::imshow("Canny Edge Detection", img);
    cv::waitKey(0);
    return 0;
}
