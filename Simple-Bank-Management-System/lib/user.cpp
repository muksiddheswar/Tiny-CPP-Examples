#include <iostream>
#include "../include/user.h"
#include "../include/account.h"
using namespace std;

User::User(int user_id, string user_name, string address, string password, string type)
{
    this -> user_id = user_id;
    this ->name = user_name;
    this ->address.push_back(address);
    this ->password = password;
    this ->type = type;
}

void User::get_user_information()
{
    cout << user_id << endl;
    cout << name << endl;
    cout << type << endl;
    for (auto i = address.begin(); i != address.end(); ++i)
        cout << *i << endl;
}

