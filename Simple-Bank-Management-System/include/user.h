#include <vector>
#include <string>
using namespace std;
#pragma once

class User 
{
   public:
      User(string user_name, string address, string password);
      void get_user_information();
      void available_options();

   private:
        int user_id;
        string name;
        vector<string> address;
        string password;
};
