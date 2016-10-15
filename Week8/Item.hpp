/**************************************
 *
 * Author: Nick Roy
 * Date: 4/15/16
 * Description: Header for Item class.
 *
 *************************************/

#ifndef _Item_hpp
#define _Item_hpp
#include <string>
using namespace std;

class Item {
 private:
  string name;
  double price;
  int quantity;
 public:
  Item();
  Item(string,double,int);
  string getName();
  double getPrice();
  int getQuantity();
  void setName(string);
  void setQuantity(int);
  void setPrice(double);

};
#endif
