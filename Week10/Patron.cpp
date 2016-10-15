/************************************************************************
 *
 * Author: Nick Roy
 * Date: 5/31/2016
 * Description: Patron class. Stores information about people checking 
 * out books from the library.
 *
 * Some commentes taken from homework assignment
 *
 ***********************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include "Patron.hpp"
#include "Book.hpp"

using namespace std;
//a constructor that takes an idNum and name and initializes fineAmount to zero
Patron::Patron(string idn, string n) {
  idNum = idn;
  name = n;
  fineAmount = 0;
}

string Patron::getIdNum() {
  return idNum;
}

string Patron::getName() {
  return name;
}

//checkedOutBooks - a vector of pointers to Books that Patron currently has checkedOut
vector<Book*> Patron::getCheckedOutBooks() {
  return checkedOutBooks;
}

//addBook - adds the specified Book to checkedOutBooks
void Patron::addBook(Book* b) {
  checkedOutBooks.push_back(b);
}

//removeBook - removes the specified Book from checkedOutBooks
void Patron::removeBook(Book* b) {
  for(int index = 0; index < checkedOutBooks.size(); index++) {
    if(checkedOutBooks[index] == b) {
      checkedOutBooks.erase(checkedOutBooks.begin() - index);
    }
  }
}

double Patron::getFineAmount() {
  return fineAmount;
}

void Patron::amendFine(double amount) {
  fineAmount = fineAmount + amount;//also covers negative numbers
}
