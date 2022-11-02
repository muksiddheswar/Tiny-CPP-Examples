#include <iostream>
#include "../include/customer.h"

using namespace std;

int test_customer()
{
  Customer m("New User", "Brussels, Belgium", "password1$");
  m.get_user_information();
  return 0;
}