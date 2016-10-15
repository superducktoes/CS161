#include "Library.hpp"
#include <iostream>
using namespace std;

int main() {
  
  Book b1("123", "War and Peace", "Tolstoy");
  Book b2("234", "Moby Dick", "Melville");
  Book b3("345", "Phantom Tollbooth", "Juster");
  Book b4("678", "War and Peace", "Tolstoy");
  Patron p1("user1", "Felicity");
  Patron p2("user2", "Waldo");
  Patron p3("user3", "Felicity");
  std::cout << "the names of our patrons are..." << std::endl;
  std::cout << p1.getName() << std::endl;
  std::cout << p2.getName() << std::endl;
  std::cout << p3.getName() << std::endl;
  Library lib;
  cout << "testing one" << endl;

  lib.addBook(&b1);
  lib.addBook(&b2);
  lib.addBook(&b3);
  lib.addBook(&b4);
  cout << "testing two" << endl;
  lib.addPatron(&p1);
  lib.addPatron(&p2);
  lib.addPatron(&p3);
  lib.checkOutBook("user2", "234");
  
  for (int i = 0; i<7; i++)
    lib.incrementCurrentDate();



  lib.checkOutBook("user2", "123");
  lib.checkOutBook("user1", "345");
  for (int i = 0; i<24; i++)
    lib.incrementCurrentDate();
  
  
  lib.payFine("user2", 0.4);
  double p1Fine = p1.getFineAmount();
  double p2Fine = p2.getFineAmount();

  std::cout << "Patron p1 fine is..." << p1Fine << std::endl;

  std::cout << "Patron p2 fine is..." << p2Fine << std::endl;

  //thus far we have only tested fines... 

  std::cout << lib.returnBook("user2") << std::endl;
  std::cout << lib.returnBook("345") << std::endl;


  std::cout << lib.checkOutBook("user1", "345") << std::endl;


  std::cout << lib.checkOutBook("user2", "345") << std::endl;

  std::cout << lib.requestBook("user2", "345") << std::endl;

  std::cout << b3.getLocation() << std::endl; //0-onshelf, 1-onhold, 2-checkedout

  std::cout << lib.requestBook("user2", "678") << std::endl;

  std::cout << lib.returnBook("345") << std::endl;


  return 0;
}
