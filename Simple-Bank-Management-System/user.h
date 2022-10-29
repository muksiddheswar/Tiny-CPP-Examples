#include <iostream>
#include <vector>
using namespace std;
#pragma once

class User 
{
   public:
      void func();
      int getNumber();
   private:
        int user_id;
        string name;
        vector<string> address;
        string password;
};
