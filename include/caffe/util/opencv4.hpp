#include <opencv2/opencv.hpp>

#if (defined(CV_MAJOR_VERSION) && CV_MAJOR_VERSION > 3)
    #define OPENCV_VERSION4
#endif

#ifdef OPENCV_VERSION4
    #define CV_LOAD_IMAGE_COLOR cv::IMREAD_COLOR
    #define CV_LOAD_IMAGE_GRAYSCALE cv::IMREAD_GRAYSCALE
#endif