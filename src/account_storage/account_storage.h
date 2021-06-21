#pragma once
#include <string>
#include <vector>
#include <map>

class Account
{
private:
  std::string id;
  float balance;

public:
  Account(const std::string &id, const float &balance = 0);
  std::string getId() const;
};

class IAccountStorage
{
public:
  virtual void addAccount(const std::string &id) = 0;
  virtual Account* getAccount(const std::string &id) const = 0;
};

class VectorAccountStorage : public IAccountStorage
{
private:
  std::vector<Account*> accounts;

public:
  ~VectorAccountStorage();
  void addAccount(const std::string &id) override;
  Account* getAccount(const std::string &id) const override;
};

class MapAccountStorage : public IAccountStorage
{
private:
  std::map<std::string , Account*> accounts;

public:
  ~MapAccountStorage();
  void addAccount(const std::string &id) override;
  Account* getAccount(const std::string &id) override;
};

class DistributedVectorAccountStorage : public IAccountStorage
{
private:
  std::vector<Account*> accountsStartingAt1;
  std::vector<Account*> accountsStartingAt2;
  std::vector<Account*> accountsStartingAt3;
  std::vector<Account*> accountsStartingAt4;
  std::vector<Account*> accountsStartingAt5;
  std::vector<Account*> accountsStartingAt6;
  std::vector<Account*> accountsStartingAt7;
  std::vector<Account*> accountsStartingAt8;
  std::vector<Account*> accountsStartingAt9;

public:
  ~DistributedVectorAccountStorage();
  void addAccount(const std::string &id) override;
  Account* getAccount(const std::string &id) const override;
};

class MultiDistributedVectorAccountStorage : public IAccountStorage
{
private:
  std::vector<std::vector<Account *>> accountVectors;

public:
  MultiDistributedVectorAccountStorage();
  ~MultiDistributedVectorAccountStorage();
  void addAccount(const std::string &id) override;
  Account* getAccount(const std::string &id) override;
};

class Bank
{
private:
  IAccountStorage * accountStorage;

public:
  Bank(IAccountStorage *storage);
  bool addAccount(std::string id);
  Account* getAccount(std::string id);
};





