#include <iostream>
using namespace std;

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

