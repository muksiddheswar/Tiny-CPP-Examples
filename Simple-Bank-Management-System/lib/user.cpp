#include <iostream>
#include "../include/user.h"
#include "../include/account.h"
using namespace std;


User::User(string user_name, string address, string password)
{
    this ->name = user_name;
    this ->address.push_back(address);
    this ->password = password;
}

void User::get_user_information()
{
    cout << name << endl;
    for (auto i = address.begin(); i != address.end(); ++i)
        cout << *i << endl;
}

