#ifndef SAVINGS_H
#define SAVINGS_H

/* Write a directive to include the Account header file */
#include <string>
#include "Account.h"

/* Write a line to have class SavingsAccount inherit publicly from Account */
class SavingsAccount : public Account
{
public:
   // constructor initializes balance and interest rate
   /* Declare a two-parameter constructor for SavingsAccount */
     SavingsAccount( double,double );
   /* Declare member function calculateInterest */
  void calculateInterest();
   void setinterestRate(double);
   double getinterestRate();
private:
   /* Declare data member interestRate */
  // double balance;
   double interestRate;
}; // end class SavingsAccount

#endif
