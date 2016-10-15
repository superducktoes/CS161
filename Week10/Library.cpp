/****************************************************************
 *
 * Author: Nick Roy
 * Date: 5/31/2016
 * Description: Library class. Used to bring patrons and books
 * together. Has the main functions for checking out/returning
 * books, adding fines, and books/patrons.
 *
 * Some comments taken from homework assignment
 *
 ***************************************************************/

#include <iostream>
#include <string>
#include <vector>

#include "Book.hpp"
#include "Library.hpp"
#include "Patron.hpp"

using namespace std;
//a constructor that initializes the currentDate to zero
//currentDate - stores the current date represented as an integer number of "days" since the Library object was created

Library::Library() {
  currentDate = 0;
}

void Library::addBook(Book* book) {
  holdings.push_back(book);
}

void Library::addPatron(Patron* patron) {
  members.push_back(patron);
}

string Library::checkOutBook(string pID, string bID) {
  //string status = "Check out successful";

  Book* bookToCheckOut = getBook(bID);
  Patron* patronCheckingOut = getPatron(pID);
  
  if(bookToCheckOut == NULL) {
    return "Patron not found";
  } 
  
  if(patronCheckingOut == NULL) {
    return "Book not found";
  }

  if(getBook(pID)->getCheckedOutBy() != NULL) {
    return "Book already checked out";
  }

  if(getBook(pID)->getRequestedBy() != NULL) {
    return "Book on hold by other patron";
  }

  //checked on the status of the book.
  //if it's there we'll check it out.

  bookToCheckOut->setRequestedBy(patronCheckingOut);
  bookToCheckOut->setLocation(CHECKED_OUT);
  bookToCheckOut->setCheckedOutBy(patronCheckingOut);
  bookToCheckOut->setDateCheckedOut(currentDate);
  patronCheckingOut->addBook(bookToCheckOut);
  
  return "Check out successful";
  
}

string Library::returnBook(string bID) {
  string status = "Return successful";
  
  if(getBook(bID) == NULL) {
    status = "Book not found";
  } else if(getBook(bID)->getLocation() != CHECKED_OUT) {
    status = "Book already in library";
  }
  //if book is real and not already in the library check it in
  if(getBook(bID)->getRequestedBy() != NULL) {
    getBook(bID)->setLocation(ON_HOLD_SHELF);
  } else {
    getBook(bID)->setLocation(ON_SHELF);
    getBook(bID)->setCheckedOutBy(NULL);
    status = "Return successful";
  }

  return status;

}

string Library::requestBook(string pID, string bID) {
  string status = "Request successful";
  
  if(getBook(bID) == NULL) {
    status = "Book not found";
  } else if(getPatron(pID) == NULL) {
    status = "Patron not found";
  } else if (getBook(bID)->getRequestedBy() != NULL) {
    status = "Book already on hold";
  }

  getBook(bID)->setRequestedBy(getPatron(pID));
  getBook(bID)->setLocation(ON_HOLD_SHELF);
  
  return status;
  
}

//payFinetakes as a parameter the amount that is being paid (not the negative of that amount)

string Library::payFine(string pID, double payment) {
  
  double negative = (payment * -1); //makes the number negative to add(subtract)
  if(getPatron(pID) == NULL) {
    return "Patron not in system";
  }

  getPatron(pID)->amendFine(negative);
  return "Payment successful";
}

//increment current date; increase each Patron's fines by 10 cents for each overdue Book they have checked out (using amendFine)

void Library::incrementCurrentDate() {

  currentDate++;
  
  for(int i = 0; i<holdings.size(); i++) {
    if(holdings[i]->getLocation() == CHECKED_OUT) {
      int fine = currentDate - holdings[i]->getDateCheckedOut();
      
      if(fine > 21) {
	holdings[i]->getCheckedOutBy()->amendFine(.10);
      }
    }
  }
}

Patron* Library::getPatron(string pID) {
  for(int i=0; i<members.size(); i++) {
    if(members[i]->getIdNum() == pID) {
      return members[i];
    }
  }
  return NULL;
}

Book* Library::getBook(string bID) {

  int counter = 0;
  
  while(counter < holdings.size()) {
    if(holdings[counter]->getIdCode() == bID) {
      return holdings[counter];
    } else {
      counter++;
    }
  }
  return NULL;
}
