#include "BankAccount.hpp"
#include <iostream>
using namespace std;

/*
class BankAccount {
private:
  string customerName;
  string customerID;
  double customerBalance;
public:

  BankAccount(string cN, string cID, double cB) {
    customerName = cN;
    customerID = cID;
    customerBalance = cB;
  }
  string getCustomerName();
  string getCustomerID();
  double getCustomerBalance();
  void withdraw(double);
  void deposit(double);
};

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
*/

int main() {

  BankAccount account1("Harry Potter", "K4637", 8032.78);
  
  cout << "Starting balance on the account is: " << account1.getCustomerBalance() << endl;
  
  account1.withdraw(244.00);
  cout << "Withdrew 244.00." << endl;
  account1.deposit(500.32);
  cout << "Added 532.32" << endl;
  
  cout << "The name on the account is : " << account1.getCustomerName() << endl;
  cout << "The ID on the account is: " << account1.getCustomerID() << endl;
  cout << "balance is: " << account1.getCustomerBalance() << endl;
  
  return 0;
}
