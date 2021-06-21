#include "account_storage.h"

Account::Account(const std::string &id, const float &balance)
{
  this->id = id;
  this->balance = balance;
}

std::string Account::getId() const
{
  return this->id;
}

VectorAccountStorage::~VectorAccountStorage()
{
  for (Account *account : accounts)
    delete account;
}

void VectorAccountStorage::addAccount(const std::string &id)
{
  Account account = Account(id);
  accounts.push_back(&account);
}

Account* VectorAccountStorage::getAccount(const std::string &id) const
{
  for (Account *account : accounts)
    if (account->getId() == id) return account;
  return nullptr;
}

MapAccountStorage::~MapAccountStorage()
{
  for (std::map<std::string, Account *>::const_iterator it = accounts.begin();
       it != accounts.end(); it++)
  {
    delete  it->second;
  }
}

void MapAccountStorage::addAccount(const std::string &id)
{
  Account account = Account(id);
  accounts[id] = &account;
}

Account* MapAccountStorage::getAccount(const std::string &id)
{
  return accounts[id];
}

DistributedVectorAccountStorage::~DistributedVectorAccountStorage()
{
  for (Account *a : accountsStartingAt1)
    delete a;
  for (Account *a : accountsStartingAt2)
    delete a;
  for (Account *a : accountsStartingAt3)
    delete a;
  for (Account *a : accountsStartingAt4)
    delete a;
  for (Account *a : accountsStartingAt5)
    delete a;
  for (Account *a : accountsStartingAt6)
    delete a;
  for (Account *a : accountsStartingAt7)
    delete a;
  for (Account *a : accountsStartingAt8)
    delete a;
  for (Account *a : accountsStartingAt9)
    delete a;
}

void DistributedVectorAccountStorage::addAccount(const std::string &id)
{
  Account account = Account(id);
  if(id[0] == '1')
    accountsStartingAt1.push_back(&account);
  else if (id[0] == '2')
    accountsStartingAt2.push_back(&account);
  else if (id[0] == '3')
    accountsStartingAt3.push_back(&account);
  else if (id[0] == '4')
    accountsStartingAt4.push_back(&account);
  else if (id[0] == '5')
    accountsStartingAt5.push_back(&account);
  else if (id[0] == '6')
    accountsStartingAt6.push_back(&account);
  else if (id[0] == '7')
    accountsStartingAt7.push_back(&account);
  else if (id[0] == '8')
    accountsStartingAt8.push_back(&account);
  else if (id[0] == '9')
    accountsStartingAt9.push_back(&account);
}

Account* DistributedVectorAccountStorage::getAccount(const std::string &id) const
{
  if (id[0] == '1')
  {
    for (Account *a : accountsStartingAt1)
      if (a->getId() == id) return a;
  }
  else if (id[0] == '2')
  {
    for (Account *a : accountsStartingAt2)
      if (a->getId() == id) return a;
  }
  else if (id[0] == '3')
  {
    for (Account *a : accountsStartingAt3)
      if (a->getId() == id) return a;
  }
  else if (id[0] == '4')
  {
    for (Account *a : accountsStartingAt4)
      if (a->getId() == id) return a;
  }
  else if (id[0] == '5')
  {
    for (Account *a : accountsStartingAt5)
      if (a->getId() == id) return a;
  }
  else if (id[0] == '6')
  {
    for (Account *a : accountsStartingAt6)
      if (a->getId() == id) return a;
  }
  else if (id[0] == '7')
  {
    for (Account *a : accountsStartingAt7)
      if (a->getId() == id) return a;
  }
  else if (id[0] == '8')
  {
    for (Account *a : accountsStartingAt8)
      if (a->getId() == id) return a;
  }
  else if (id[0] == '9')
  {
    for (Account *a : accountsStartingAt9)
      if (a->getId() == id) return a;
  }
  return nullptr;
}

MultiDistributedVectorAccountStorage::MultiDistributedVectorAccountStorage()
{
  for (int i = 0; i < 10; i++)
    accountVectors.push_back(std::vector<Account *>());
}

MultiDistributedVectorAccountStorage::~MultiDistributedVectorAccountStorage()
{
  for (int i = 0; i < 10; i++)
    for (int j = 0; j < accountVectors[j].size(); j++)
      delete accountVectors[i][j];
}

void MultiDistributedVectorAccountStorage::addAccount(const std::string &id)
{
  int index = id[0] - '0';
  return accountVectors[index].push_back(new Account(id));
}

Account* MultiDistributedVectorAccountStorage::getAccount(const std::string &id)
{
  int index = id[0] - '0';
  for (auto & i : accountVectors[index])
    if (accountVectors[index][i]->GetId() == id) return i;
  return nullptr;
}

Bank::Bank(IAccountStorage *storage)
{
  accountStorage = storage;
}

bool Bank::addAccount(std::string id)
{
  if (id[0] == '1') return false;
  accountStorage->addAccount(id);
  return true;
}

Account *Bank::getAccount(std::string id)
{
  return accountStorage->getAccount(id);
}












