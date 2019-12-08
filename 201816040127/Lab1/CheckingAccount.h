#ifndef CHECKING_H
#define CHECKING_H
#include"Account.h"
//e a directive to include the Account header file
class CheckingAccount : public Account
//  a line to have class CheckingAccount inherit publicly from Account
{
public:
   // constructor initializes balance and transaction fee
   CheckingAccount(double = 0.0,double = 0.0);
   // Declare a two-argument constructor for CheckingAccount
   void credit(double);
   // Redeclare member function credit, which will be redefined
   bool debit(double);
   // Redeclare member function debit, which will be redefined
private:
    double transactionFee;
   // data member transactionFee

   // utility function to charge fee
     void chargeFee();
   // Declare member function chargeFee
}; // end class CheckingAccount

#endif

