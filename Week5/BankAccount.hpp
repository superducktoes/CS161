/*************************************************************************
 *
 * Author: Nick Roy
 * Date: 4/20/16
 * Description: BankAccount class. Constructor takes customer name as
 * a string, ID as a string, and the balance as a double. Methods also
 * available to get the items passed in, as well as withdraw/deposit 
 * from the balance.
 *
 *************************************************************************/

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

