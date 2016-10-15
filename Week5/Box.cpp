/********************************************************
 *
 * Author: Nick Roy
 * Date: 4/24/2016
 * Description: Box class functions. Takes int's as 
 * constructors to set the height, width, and length of
 * the box. Can also get the volume and surface area 
 * of the box constructed.
 * 
 *******************************************************/

#include "Box.hpp"
#include <iostream>

void Box::setHeight(int h) {
  height = h;
}

void Box::setWidth(int w) {
  width = w;
}

void Box::setLength(int l) {
  length = l;
}

int Box::getVolume() {
  return length * width * height;
}

int Box::getSurfaceArea() {
  return 2*(length*width) + 2*(width * height);
}
