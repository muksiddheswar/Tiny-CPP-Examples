#include <string>
#include "user.h"

using namespace std;
#pragma once

class Account 
{
   public:
      void func();

   private:
        User account_user;
        int account_number;
        float account_balance;
};
