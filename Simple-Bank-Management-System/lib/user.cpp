#include <iostream>
#include "../include/user.h"
using namespace std;
// #pragma once

void User::login()
{
    string user_name;
    string password;
    cout << "User Name: ";
    getline(cin, user_name);
    cout << "User Password: ";
    cin >> password;
    getline(cin, password);
}

