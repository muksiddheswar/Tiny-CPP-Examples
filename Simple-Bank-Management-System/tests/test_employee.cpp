#include <iostream>
#include "../include/employee.h"

using namespace std;

int test_employee()
{
  Employee m("root", "HQ", "root");
  m.get_user_information();
  return 0;
}