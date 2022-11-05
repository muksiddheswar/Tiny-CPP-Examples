#include <iostream>
#include "../include/user.h"

using namespace std;

int test_user()
{
  User m(100001, "root", "HQ", "root", "Employee");
  m.get_user_information();
  return 0;
}