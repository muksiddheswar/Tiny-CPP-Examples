#include <iostream>
// #include "../include/user.h"
// #include "../include/account.h"
#include "../include/bank.h"
using namespace std;

Bank::Bank(string bank_name)
{
    this->bank_name = bank_name;
    cout << "Bank " + bank_name + " initialised.";
}