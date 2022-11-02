# include "user.h"
using namespace std;
#pragma once

class Customer: public User
{
   public:
      Customer(string user_name, string address, string password): User(user_name, address, password, "Customer") {};

};
