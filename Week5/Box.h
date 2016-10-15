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
