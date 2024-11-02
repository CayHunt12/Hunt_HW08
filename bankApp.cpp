#include "bankAccount.h"
#include <iostream>
#include <array>

int main() {
// Create individual bank accounts
    BankAccount jackAccount("Jack Smith", 50.0f);
    BankAccount jillAccount("Jill Brian", 100.0f);
    std::array<BankAccount, 3> bankArray = { BankAccount("Ralph Kramden",
    10.0f),
   BankAccount("Alice Kramden", 20.0f),
   BankAccount("Ed Norton", 30.0f)
   };

   // Array of all accounts for easy looping
       std::array<BankAccount*, 5> allAccounts = { &jackAccount, &jillAccount,
       &bankArray[0], &bankArray[1], &bankArray[2] };

           // Deposit $30 to each account
               for (auto account : allAccounts) {
                       account->deposit(30.0f);
                           }

                               // Withdraw $20 from each account
                                   for (auto account : allAccounts) {
                                           account->withdraw(20.0f);
                                               }

                                                   // Print the details of each
                                                   // account
                                                       for (auto account :
                                                       allAccounts) {
                                                               std::cout <<
                                                               "Account holder:
                                                               " <<
                                                               account->getName()
                                                               << ", Balance: $"
                                                               <<
                                                               account->getBalance()
                                                               << std::endl;
                                                                   }

                                                                       return 0;
}
