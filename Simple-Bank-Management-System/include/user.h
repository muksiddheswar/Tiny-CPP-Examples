#include <vector>
#include <string>
using namespace std;
#pragma once

class User 
{
   public:
      User() {};
      explicit User(int user_id, string user_name, string address, string password, string type);
      void get_user_information();
      void available_options();
      int verify_password(string given_password);

   private:
        int user_id;
        string name;
        vector<string> address;
        string password;
        string type;
};
