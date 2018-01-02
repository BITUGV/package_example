/* Copyright (c) 2017, Yu Zhang, Intelligent Vehicle Research Center(IVRC),
 * Beijing Institute of Technology.
 * All rights reserved.
 *        Files: lib1.hpp
 *   Created on: 2017-11-5
 *       Author: Yu Zhang
 *        Email: yu.zhang.bit@gmail.com
 */
#ifndef SIMPLE_CPP_PROJECT_LIB1_HPP
#define SIMPLE_CPP_PROJECT_LIB1_HPP

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>

namespace ivrc {
class Lib1 {
 public:
    Lib1();
    void sayHelloFromLib1();
    void setDisplay(bool flag) { this->display_ = flag; };
    bool getDisplay() { return this->display_; };
    cv::Mat getImage() { return this->image_; };
 private:
    bool display_{};
    cv::Mat image_{};
};
}  // namespace ivrc

#endif   // SIMPLE_CPP_PROJECT_LIB1_HPP



