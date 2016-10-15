/*************************************************************
 *
 * Author: Nick Roy
 * Date: 5/1/2016
 * Description: Calls to manage the LineSegment class. Object
 * is created using the constructor using two points. 
 * 
 ************************************************************/
#include <iostream>
#include "LineSegment.hpp"
using namespace std;

LineSegment::LineSegment(Point p1, Point p2) {
  setEnd1(p1);
  setEnd2(p2);
}

Point LineSegment::getEnd1() {
  return endOne;
}

Point LineSegment::getEnd2() {
  return endTwo;
}

void LineSegment::setEnd1(Point p1) {
  endOne = p1;
}

void LineSegment::setEnd2(Point p2) {
  endTwo = p2;
}

double LineSegment::length() {
  return endOne.distanceTo(endTwo);
}

//calculates the slope using four points
double LineSegment::slope() {
  
  double x1 = endOne.getXCoord();
  double x2 = endTwo.getXCoord();
  double y1 = endOne.getYCoord();
  double y2 = endTwo.getYCoord();
  
  return (y2-y1) / (x2-x1);

}
