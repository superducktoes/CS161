#include "Box.h"
#include <iostream>
using namespace std;

/*
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
*/

int main() {
  
  Box box2;
  Box box;
  box.setLength(2);
  box.setWidth(3);
  box.setHeight(4);
  
  cout << "The volume of the box is: " << box.getVolume() << endl;
  cout << "The surface area of the box is: " << box.getSurfaceArea() << endl;

  cout << "The volume of the 2 box is: " << box2.getVolume() << endl;
  cout << "The surface area of the 2 box is: " << box2.getSurfaceArea() << endl;

 
  return 0;
}
