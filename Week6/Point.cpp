/************************************************************
 *
 * Author: Nick Roy
 * Date: 5/1/2016
 * Description: Calls to mange Point class. Object is created
 * using either default constructor or passed two doubles 
 * representing x and y. 
 *
 ************************************************************/
#include <cmath>
#include "Point.hpp"

using namespace std;

Point::Point() {
  coordX = 0;
  coordY = 0;
}

Point::Point(double x, double y) {
  coordX = x;
  coordY = y;
}

void Point::setXCoord(double x) {
  coordX = x;
}

void Point::setYCoord(double y) {
  coordY = y;
}

double Point::getXCoord() {
  return coordX;
}

double Point::getYCoord() {
  return coordY;
}
//calculates distance between points
double Point::distanceTo(const Point& second) {
  double tempX = second.coordX - coordX;
  double tempY = second.coordY - coordY;
  
  return sqrt((tempX * tempX)+(tempY * tempY));
}
