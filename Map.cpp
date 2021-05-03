//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream> 
//#include <cstdlib>
//#include <ctime>
//#include <vector>
//#include <fstream> 
//#include <string>
//#include <algorithm>
//#include <stack>
//#include <queue>
//#include <map>
//#include <iterator>
//#include <time.h>
//
//using namespace std;
//
////5
//class Account
//{
//	string accountNumber;
//	float balance;
//
//public:
//	Account(string accountNumber)
//	{
//		this->accountNumber = accountNumber;
//	}
//	string GetAccountNumber()
//	{
//		return this->accountNumber;
//	}
//	float GetBalance()
//	{
//		return this->balance;
//	}
//};
//
//int GetSelection(int val)
//{
//	while (true)
//	{
//		int selection;
//		cout << "Enter menu selection: ";
//		cin >> selection;
//		if (selection >= 1 and selection <= val)
//		{
//			return selection;
//		}
//		else
//		{
//			cout << "Wrong format, enter a number in the menu. " << endl;
//		}
//	}		
//}
//
//
//string GetAccountNumber()
//{
//	while (true)
//	{
//		string accountNumber;
//		cout << "Enter a four digit account number: ";
//		cin >> accountNumber;
//		if (accountNumber.size() == 4)
//		{
//			return accountNumber;
//		}
//		else
//		{
//			cout << "Wrong format, enter a four digit account number. " << endl;
//		}
//	}
//}
//
//
//float GetTransaktionAmount() 
//{
//	while (true)
//	{
//		float amount;
//		cout << "Enter an amount: ";
//		cin >> amount;
//		if (amount >= 0)
//		{
//			return amount;
//		}
//		else
//		{
//			cout << "Wrong format, enter a positive amount." << endl;
//		}
//	}
//}
//
//struct tm GetTransaktionDate()
//{
//	time_t now = time(NULL);
//	struct tm* date = localtime(&now);
//	return *date;
//}
//
//void SaveAccounts(map<string, float>& accounts, map<string, float>::iterator it)
//{
//	ofstream outfile;
//	outfile.open("accountFile.txt", ofstream::out | ofstream::trunc);
//	for (it = accounts.begin(); it != accounts.end(); it++)
//	{
//		outfile << it->first << endl;
//	}
//	outfile.close();
//}
//
//void SaveTransactions(string accountNumber, string type, float amount, struct tm date)
//{
//	ofstream outfile;
//	outfile.open("transactionFile.txt", ofstream::out | ofstream::app);
//	outfile << "Account: " << accountNumber << ". Type: " << type << ". Amount: " << amount << ". Date: " << date.tm_year+1900 << endl;
//	outfile.close();
//}
//
//void Deposit(map<string, float>& accounts, string accountNumber)
//{
//	float amount = GetTransaktionAmount();
//	struct tm date = GetTransaktionDate();
//	accounts[accountNumber] += amount;
//	cout << "You have made a deposit of " << amount << " kr at " << date.tm_year+1900 << "." << endl;
//	SaveTransactions(accountNumber, "Deposit", amount, date);
//}
//
//void Withdrawal(map<string, float>& accounts, string accountNumber)
//{
//
//	float amount = GetTransaktionAmount();
//	struct tm date = GetTransaktionDate();
//	if (amount <= accounts[accountNumber])
//	{
//		accounts[accountNumber] -= amount;
//		cout << "You have made a withdrawal of " << amount << " kr at " << date.tm_year+1900 << "." << endl;
//		SaveTransactions(accountNumber, "Withdrawal", amount, date);
//	}
//	else
//	{
//		cout << "Too low balance." << endl;
//	}
//}
//
//void Balance(map<string, float>& accounts, string accountNumber)
//{
//	cout << "Your balance is: " << accounts[accountNumber] << " kr." << endl;
//}
//
//void MenuB(map<string, float>& accounts, string accountNumber)
//{
//	while (true)
//	{
//		cout << "***MENU B*** \n1. Deposit. \n2. Withdrawal. \n3. View balance. \n4. Log out." << endl;
//		int selection = GetSelection(4);
//		if (selection == 1)
//		{
//			Deposit(accounts, accountNumber);
//		}
//		else if (selection == 2)
//		{
//			Withdrawal(accounts, accountNumber);
//		}
//		else if (selection == 3)
//		{
//			Balance(accounts, accountNumber);
//		}
//		else if (selection == 4)
//		{
//			break;
//		}
//	}
//}
//
//void CreateAccount(map<string,float> &accounts, map<string, float>::iterator it)
//{
//	string accountNumber = GetAccountNumber();
//	bool exists = false;
//	if (accounts.find(accountNumber) != accounts.end())
//	{
//		exists = true;
//	}
//	if (exists == false)
//	{
//		accounts.insert({accountNumber, 0});
//		cout << "Account have been created." << endl;
//		SaveAccounts(accounts, it);
//	}
//	else
//	{
//		cout << "Account already exists." << endl;
//	}
//}
//	
//void LogIn(map<string, float> &accounts)
//{
//	string accountNumber = GetAccountNumber();
//	bool exists = false;
//	if (accounts.find(accountNumber) != accounts.end())
//	{
//		exists = true;
//	}
//	if (exists == true)
//	{
//		cout << "You have logged in." << endl;
//		MenuB(accounts, accountNumber);
//	}
//	else
//	{
//		cout << "Account already exists." << endl;
//	}
//}
//
//void MenuA(map<string, float>& accounts, map<string, float>::iterator it)
//{
//	while (true)
//	{
//		cout << "***MENU A*** \n1. Create account. \n2. Log in. \n3. Exit." << endl;
//		int selection = GetSelection(3);
//		if (selection == 1)
//		{
//			CreateAccount(accounts, it);
//		}
//		else if (selection == 2)
//		{
//			LogIn(accounts);
//		}
//		else if (selection == 3)
//		{
//			break;
//		}
//
//	}
//}
//    
//int main()
//{
//	map<string, float> accounts;
//	map<string, float>::iterator it;
//	MenuA(accounts, it);
//}
