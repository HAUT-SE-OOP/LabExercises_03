// Lab 1: CheckingAccount.h
// Definition of CheckingAccount class.
#ifndef CHECKING_H
#define CHECKING_H

#include "Account.h"
/* Write a directive to include the Account header file */

/* Write a line to have class CheckingAccount inherit publicly from Account */
class CheckingAccount:public Account
{
public:
   // constructor initializes balance and transaction fee
   CheckingAccount(double,double);
   /* Declare a two-argument constructor for CheckingAccount */
   void credit(double=0);
   /* Redeclare member function credit, which will be redefined */
   bool debit(double);
   void chargeFee();
   /* Redeclare member function debit, which will be redefined */
private:
    double transactionFee;
   /* Declare data member transactionFee */

   // utility function to charge fee
   //double chargeFee;
   /* Declare member function chargeFee */
}; // end class CheckingAccount

#endif
