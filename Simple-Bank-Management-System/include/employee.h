# include "user.h"
using namespace std;
#pragma once

class Employee: public User
{
   public:
      Employee(string user_name, string address, string password): User(user_name, address, password, "Employee") {};

};
