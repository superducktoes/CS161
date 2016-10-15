/***************************************************************
 * 
 * Author: Nick Roy
 * Date: 4/15/16
 * Description: ShoppingCart class. Default constructor
 * creates an object with an array of Item objects. addItem
 * adds an Item created to the cart. totalPrice totals the cost
 * of items times the price
 * 
 **************************************************************/
#include "ShoppingCart.hpp"
#include <string>
ShoppingCart::ShoppingCart() {
  items = new Item[100](); //intitalizes array of items
  arrayEnd = 0; //sets the arrayEnd to zero when the cart is created
}

void ShoppingCart::addItem(Item* newAdd) {
  items[arrayEnd] = *newAdd; //adds item to the array
  arrayEnd++;//increments for the next item to add
}

double ShoppingCart::totalPrice() {
  double cost = 0.0;
  //loops through the array to get the cost of an item. Stops at the arrayEnd
  for(int index = 0; index < arrayEnd; index++) {
    cost = cost + items[index].getPrice() * items[index].getQuantity();
  }
  
  return cost;
}
