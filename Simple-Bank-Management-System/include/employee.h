# include "user.h"
using namespace std;
#pragma once

class Employee: public User
{
   public:
      Employee(): User() {};
      explicit Employee(int user_id, string user_name, string address, string password): User(user_id, user_name, address, password, "Employee") {};

};
