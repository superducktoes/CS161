/*********************************************************
 *
 * Author: Nick Roy
 * Date: 5/14/16
 * Description: Item class. Constructor takes the name,
 * price, and quantity of an item. Can also return
 * name, quantity, and price.
 *
 * Default constructor sets everything to 0 or empty
 *
 ********************************************************/

#include "Item.hpp"
#include <string>
Item::Item() {
  setName("");
  setPrice(0.0);
  setQuantity(0);
}

Item::Item(string n, double p, int q) {
  setName(n);
  setPrice(p);
  setQuantity(q);
}

string Item::getName() {
  return name;
}

void Item::setName(string n) {
  name = n;
}

double Item::getPrice() {
  return price;
}

void Item::setPrice(double p) {
  price = p;
}

int Item::getQuantity() {
  return quantity;
}

void Item::setQuantity(int q) {
  quantity = q;
}
