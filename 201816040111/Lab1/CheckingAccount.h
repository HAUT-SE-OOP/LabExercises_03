#ifndef CHECKING_H
#define CHECKING_H
#include "Account.h"

class CheckingAccount : public Account
{
public:
   // constructor initializes balance and transaction fee
   /* Declare a two-argument constructor for CheckingAccount */
    CheckingAccount( double , double ) ;
   /* Redeclare member function credit, which will be redefined */
   void credit( double );
   /* Redeclare member function debit, which will be redefined */
   void debit( double );
private:
   /* Declare data member transactionFee */
    double transactionFee;
   // utility function to charge fee
   /* Declare member function chargeFee */
   void chargeFee();
}; // end class CheckingAccount

#endif
