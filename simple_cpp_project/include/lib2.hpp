/* Copyright (c) 2017, Yu Zhang, Intelligent Vehicle Research Center(IVRC),
 * Beijing Institute of Technology.
 * All rights reserved.
 *        Files: lib2.hpp
 *   Created on: 2017-11-5
 *       Author: Yu Zhang
 *        Email: yu.zhang.bit@gmail.com
 */
#ifndef SIMPLE_CPP_PROJECT_LIB2_HPP
#define SIMPLE_CPP_PROJECT_LIB2_HPP

namespace ivrc {
class Lib2 {
 public:
    Lib2();
    void sayHelloFromLib2();
    void setDisplay(bool flag) { this->display_ = flag; };
    bool getDisplay() { return this->display_; };
 private:
    bool display_{};
};
}  // namespace ivrc

#endif   // SIMPLE_CPP_PROJECT_LIB2_HPP
