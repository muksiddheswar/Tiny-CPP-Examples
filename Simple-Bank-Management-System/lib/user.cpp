#include <iostream>
#include "../include/user.h"
#include "../include/account.h"
using namespace std;

// #pragma once

void User::login()
{
    string user_name;
    string password;
    vector<Account> all_accounts;

    cout << "User Name: ";
    getline(cin, user_name);
    cout << "User Password: ";
    cin >> password;
    getline(cin, password);

    // all_accounts = locate_all_accounts();
}

