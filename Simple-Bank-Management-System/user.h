#include <vector>
#include <string>
using namespace std;
#pragma once

class User 
{
   public:
      void func();

   private:
        int user_id;
        string name;
        vector<string> address;
        string password;
};
