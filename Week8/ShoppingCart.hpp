/*************************************************
 *
 * Author: Nick Roy
 * Date: 4/15/16
 * Description: Header file for ShoppingCart class
 *
 *************************************************/

#include "Item.hpp"
#include <string>
#ifndef _ShoppingCart_hpp
#define _ShoppingCart_hpp

class ShoppingCart {
private:
  Item* items;
  int arrayEnd;//keeps track of the last position
public:
  ShoppingCart();
  void addItem(Item* newAdd);
  double totalPrice();
};
#endif
