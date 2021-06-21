/*
#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <iterator>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <time.h>
#include <vector>

// 1
class Account {
  std::string accountNumber;
  float balance;

public:
  Account(std::string accountNumber) { this->accountNumber = accountNumber; }
  std::string getAccountNumber() { return this->accountNumber; }
  float getBalance() { return this->balance; }
};

int getSelection(int val) {
  while (true) {
    int selection;
    std::cout << "Enter menu selection: ";
    std::cin >> selection;
    if (selection >= 1 and selection <= val) {
      return selection;
    } else {
      std::cout << "Wrong format, enter a number in the menu. " << std::endl;
    }
  }
}

std::string getAccountNumber() {
  while (true) {
    std::string accountNumber;
    std::cout << "Enter a four digit account number: ";
    std::cin >> accountNumber;
    if (accountNumber.size() == 4) {
      return accountNumber;
    } else {
      std::cout << "Wrong format, enter a four digit account number. "
                << std::endl;
    }
  }
}

float getTransaktionAmount() {
  while (true) {
    float amount;
    std::cout << "Enter an amount: ";
    std::cin >> amount;
    if (amount >= 0) {
      return amount;
    } else {
      std::cout << "Wrong format, enter a positive amount." << std::endl;
    }
  }
}

struct tm getTransaktionDate() {
  time_t now = time(NULL);
  struct tm *date = localtime(&now);
  return *date;
}

void saveAccounts(std::map<std::string, float> &accounts,
                  std::map<std::string, float>::iterator it) {
  std::ofstream outfile;
  outfile.open("accountFile.txt", std::ofstream::out | std::ofstream::trunc);
  for (it = accounts.begin(); it != accounts.end(); it++) {
    outfile << it->first << std::endl;
  }
  outfile.close();
}

void saveTransactions(std::string accountNumber, std::string type, float amount,
                      struct tm date) {
  std::ofstream outfile;
  outfile.open("transactionFile.txt", std::ofstream::out | std::ofstream::app);
  outfile << "Account: " << accountNumber << ". Type: " << type
          << ". Amount: " << amount << ". Date: " << date.tm_year + 1900
          << std::endl;
  outfile.close();
}

void deposit(std::map<std::string, float> &accounts,
             std::string accountNumber) {
  float amount = GetTransaktionAmount();
  struct tm date = GetTransaktionDate();
  accounts[accountNumber] += amount;
  std::cout << "You have made a deposit of " << amount << " kr at "
            << date.tm_year + 1900 << "." << std::endl;
  SaveTransactions(accountNumber, "Deposit", amount, date);
}

void withdrawal(std::map<std::string, float> &accounts,
                std::string accountNumber) {

  float amount = GetTransaktionAmount();
  struct tm date = GetTransaktionDate();
  if (amount <= accounts[accountNumber]) {
    accounts[accountNumber] -= amount;
    std::cout << "You have made a withdrawal of " << amount << " kr at "
              << date.tm_year + 1900 << "." << std::endl;
    SaveTransactions(accountNumber, "Withdrawal", amount, date);
  } else {
    std::cout << "Too low balance." << std::endl;
  }
}

void balance(std::map<std::string, float> &accounts,
             std::string accountNumber) {
  std::cout << "Your balance is: " << accounts[accountNumber] << " kr."
            << std::endl;
}

void menuB(std::map<std::string, float> &accounts, std::string accountNumber) {
  while (true) {
    std::cout
        << "***MENU B*** \n1. Deposit. \n2. Withdrawal. \n3. View balance. "
           "\n4. Log out."
        << std::endl;
    int selection = GetSelection(4);
    if (selection == 1) {
      Deposit(accounts, accountNumber);
    } else if (selection == 2) {
      Withdrawal(accounts, accountNumber);
    } else if (selection == 3) {
      Balance(accounts, accountNumber);
    } else if (selection == 4) {
      break;
    }
  }
}

void createAccount(std::map<std::string, float> &accounts,
                   std::map<std::string, float>::iterator it) {
  std::string accountNumber = GetAccountNumber();
  bool exists = false;
  if (accounts.find(accountNumber) != accounts.end()) {
    exists = true;
  }
  if (exists == false) {
    accounts.insert({accountNumber, 0});
    std::cout << "Account have been created." << std::endl;
    SaveAccounts(accounts, it);
  } else {
    std::cout << "Account already exists." << std::endl;
  }
}

void logIn(std::map<std::string, float> &accounts) {
  std::string accountNumber = GetAccountNumber();
  bool exists = false;
  if (accounts.find(accountNumber) != accounts.end()) {
    exists = true;
  }
  if (exists == true) {
    std::cout << "You have logged in." << std::endl;
    MenuB(accounts, accountNumber);
  } else {
    std::cout << "Account already exists." << std::endl;
  }
}

void menuA(std::map<std::string, float> &accounts,
           std::map<std::string, float>::iterator it) {
  while (true) {
    std::cout << "***MENU A*** \n1. Create account. \n2. Log in. \n3. Exit."
              << std::endl;
    int selection = GetSelection(3);
    if (selection == 1) {
      CreateAccount(accounts, it);
    } else if (selection == 2) {
      LogIn(accounts);
    } else if (selection == 3) {
      break;
    }
  }
}

int main() {
  std::map<std::string, float> accounts;
  std::map<std::string, float>::iterator it;
  MenuA(accounts, it);
}
*/
