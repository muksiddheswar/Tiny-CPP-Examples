#include <vector>
#include <string>
using namespace std;
#pragma once

class User 
{
   public:
      void login();
      void open_account();
      void available_options();

   private:
        int user_id;
        string name;
        vector<string> address;
        string password;
};
