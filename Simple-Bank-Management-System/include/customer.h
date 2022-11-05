# include "user.h"
using namespace std;
#pragma once

class Customer: public User
{
   public:
      Customer(int user_id, string user_name, string address, string password): User(user_id, user_name, address, password, "Customer") {};

};
