/************************************************************
 *
 * Author: Nick Roy
 * Date: 5/1/2016
 * Description: Calls to manage the Point class. Object can 
 * either use the default constructor or two doubles. Other
 * methods avaialble are for setting/getting endpoints.
 * 
 **********************************************************/
#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
using namespace std;

class Point {

private:
  double coordX;
  double coordY;
  
public: 
  Point();
  Point(double,double);
  void setXCoord(double);
  void setYCoord(double);
  double getXCoord();
  double getYCoord();
  double distanceTo(const Point&);
};
#endif
