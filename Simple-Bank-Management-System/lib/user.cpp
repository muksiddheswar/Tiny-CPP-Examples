#include <iostream>
#include "../include/user.h"
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
    cout << endl << user_id << endl;
    cout << name << endl;
    cout << type << endl;
    for (auto i = address.begin(); i != address.end(); ++i)
        cout << *i << endl;
}

int User::verify_password(string given_password)
{
    if (given_password == password)
        return 1;

    else
        return 0;
}