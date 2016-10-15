/**********************************************************
 *
 * Author: Nick Roy
 * Date: 5/1/2016
 * Description: LineSegment class. Object is created using
 * two points.
 *
 *********************************************************/
#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

#include "Point.hpp"

using namespace std;

class LineSegment {
private:
  Point endOne;
  Point endTwo;
public:
  LineSegment(Point,Point);
  Point getEnd1();
  Point getEnd2();
  void setEnd1(Point);
  void setEnd2(Point);
  double length();
  double slope();
};

#endif
