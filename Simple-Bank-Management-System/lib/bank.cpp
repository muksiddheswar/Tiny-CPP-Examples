#include <iostream>
#include "../include/customer.h"
#include "../include/employee.h"
#include "../include/bank.h"

using namespace std;

Bank::Bank(string bank_name)
{
    this->bank_name = bank_name;
    cout << bank_name + " initialised. \n";
    this->all_employees.push_back(Employee(100001, "root", "HQ", "root"));

    cout << "Here:" << this->all_employees.size();
}

void Bank::bank_main()
{
    int user_input;
    int user_input_n;
    cout<< "1: Login. \n" ;
    cout<< "2: Open an account. \n" ;
    cout<< "3: Exit. \n";
    cin >> user_input;

    if (user_input == 1)
    {
        cout << "Login: \n";
        cout << "1. Customer. \n";
        cout << "2. Employee. \n";
        cin >> user_input_n;
        if (user_input_n == 1)
        {
            if (all_customers.empty())
                cout << "No cutomer accounts exist. \n";
            // else
                // Bank::customer_login();
        }

        if (user_input_n == 2)
        {
            if (all_employees.empty())
                cout << "No employee accounts exist. \n";
            else
                cout << "Employee accounts exist!!!! \n";
                // Bank::employee_login();
        }
    }

    else if (user_input == 2)
    {
        cout << "Open Account \n";
    }

    else if (user_input == 3)
        return;
    
    bank_main();
}

int Bank::customer_login()
{

}

void Bank::get_credentails(string* user_name, string* password)
{
    cout << "User Name: ";
    getline(cin, *user_name);
    cout << "User Password: ";
    cin >> *password;

    // all_accounts = locate_all_accounts();
}

