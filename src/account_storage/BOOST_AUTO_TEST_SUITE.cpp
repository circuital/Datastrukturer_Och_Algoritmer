//
// Created by Elvira Granqvist on 2021-05-17.
//

#include "BOOST_AUTO_TEST_SUITE.h"
#include "account_storage.h"

BOOST_AUTO_TEST_SUITE(VectorAccountStorageTests)
BOOST_AUTO_TEST_CASE(AddedAccountShouldBePossibleToGet){
  VectorAccountStorage storage;
  storage.addAccount("123");
  Account *a = storage.getAccount("123");
  BOOST_CHECK_EQUAL("123", a->getId());
}

BOOST_AUTO_TEST_CASE(NonExistingAccountShouldReturnNullPtr){
    VectorAccountStorage storage;
    storage.addAccount("123");
    Account *a = storage.getAccount("123");
    BOOST_CHECK_EQUAL(nullptr, a); }
BOOST_AUTO_TEST_SUITE_END()
