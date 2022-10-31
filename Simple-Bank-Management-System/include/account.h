#include <string>
#include "user.h"

// using namespace std;
// #pragma once

namespace Accounts
{
   class Account 
   {
      public:
         void func();

      private:
         User account_user;
         int account_number;
         float account_balance;
   };

   vector<Account> locate_all_accounts();

}