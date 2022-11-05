#include <iostream>
#include "tests/test_bank.cpp"
#include "tests/test_user.cpp"
#include "tests/test_employee.cpp"
#include "tests/test_customer.cpp"

using namespace std;

int main()
{
  test_bank();
  test_user();
  // test_employee();
  // test_customer();
  getchar();
}