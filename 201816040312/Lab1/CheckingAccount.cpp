// Lab 1: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
using namespace std;

#include "CheckingAccount.h" // CheckingAccount class definition

// constructor initializes balance and transaction fee
/* Write the CheckingAccount constructor to call the Account constructor
   and validate and set the transaction fee value */
CheckingAccount::CheckingAccount(double a,double b)
:Account(a)
{
    fee=b;
}
// credit (add) an amount to the account balance and charge fee
/* Write the credit member function to call Account's credit function
   and then charge a fee */
void CheckingAccount::credit( double amount )
{
   setBalance(getBalance()+amount); // add amount to balance
   chargefee();
} // end function credit

/* Write the debit member function to call Account's debit function
   and then charge a fee if it returned true*/
bool CheckingAccount::debit( double amount )
{
   if ( amount > getBalance() ) // debit amount exceeds balance
   {
      cout << "Debit amount exceeded account balance." << endl;
      return false;
   } // end if
   else // debit amount does not exceed balance
   {
      setBalance(getBalance()-amount);
      chargefee();
      return true;
   } // end else
} // end function debit
// subtract transaction fee
/* Write the chargeFee member function to subtract transactionFee
   from the current balance and display a message */
void CheckingAccount::chargefee()
{
    setBalance(getBalance()-fee);
}

/**************************************************************************
 * (C) Copyright 1992-2012 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
