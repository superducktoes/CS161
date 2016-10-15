/********************************************************
 *
 * Author: Nick Roy
 * Date:4/24/2016
 * Description: Header file for Box. Uses a default
 * constructor that sets length, height, and width to 1.
 *
 *******************************************************/
#include <iostream>
using namespace std;

class Box {
 private:
  double height;
  double length;
  double width;

 public:
  Box() {
    height = length = width = 1;
  }
  void setHeight(int);
  void setWidth(int);
  void setLength(int);
  int getVolume();
  int getSurfaceArea();
};
