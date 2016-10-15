/************************************************************
 *
 * Author: Nick Roy
 * Date: 5/31/2016
 * Description: Class file for books in the library. Takes
 * information about the book (title,author,check out status)
 * and can return information as well.
 *
 * Some comments added from homework informtion
 *
 ***********************************************************/

#include <iostream>
#include "Book.hpp"
#include "Patron.hpp"

using namespace std;

//constructor - takes an idCode, title and author; checkedOutBy and requestedBy should be initialized to NULL; 
//a new Book should be on the shelf

Book::Book(string idc, string t, string a) {
  idCode = idc;
  title = t;
  author = a;
  dateCheckedOut = 0;
  location = ON_SHELF;
  setRequestedBy(NULL);
  setCheckedOutBy(NULL);
}

//idCode - a unique identifier for a Book (think library bar code, not ISBN) - you can assume uniqueness, 
//you don't have to enforce it

string Book::getIdCode() {
  return idCode;
}

string Book::getTitle() {
  return title;
}

string Book::getAuthor() {
  return author;
}

Locale Book::getLocation() {
  return location;
}

//location - a Book can be either on the shelf, on the hold shelf, or checked out

void Book::setLocation(Locale l) {
  location = l;
}

Patron* Book::getCheckedOutBy() {
  return checkedOutBy;
}

void Book::setCheckedOutBy(Patron* p) {
  checkedOutBy = p;
}

Patron* Book::getRequestedBy() {
  return requestedBy;
}

void Book::setRequestedBy(Patron* p) {
  requestedBy = p;
}

int Book::getDateCheckedOut() {
  return dateCheckedOut;
}

void Book::setDateCheckedOut(int d) {
  dateCheckedOut = d;
}
