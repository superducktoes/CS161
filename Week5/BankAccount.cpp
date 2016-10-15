/**************************************************************************
 *
 * Author: Nick Roy
 * Date: 4/20/16
 * Description: Calls to manage the BankAccount class. Class is created using the 
 * default constructor. Once created options allow for deposit/withdraw and 
 * viewing the status of the account.
 *
 **************************************************************************/

#include "BankAccount.hpp"
#include <iostream>
using namespace std;

void BankAccount::withdraw(double a) {
  customerBalance = customerBalance - a;
}

void BankAccount::deposit(double a) {
  customerBalance = customerBalance + a;
}

string BankAccount::getCustomerName() {
  return customerName;
}

string BankAccount::getCustomerID() {
  return customerID;
}

double BankAccount::getCustomerBalance() {
  return customerBalance;
}
