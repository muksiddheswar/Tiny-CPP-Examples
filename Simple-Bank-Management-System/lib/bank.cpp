#include <tuple>
#include <iostream>
#include "../include/customer.h"
#include "../include/employee.h"
#include "../include/bank.h"

using namespace std;

Bank::Bank(string bank_name)
{
    this->bank_name = bank_name;
    cout << bank_name + " initialised. \n";
    Employee root_employee = Employee(100001, "root", "HQ", "root");
    this->all_employees[100001] = root_employee;

    cout << "Here:" << this->all_employees.size() << endl;
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
            else
                Bank::customer_login();
        }

        if (user_input_n == 2)
        {
            if (all_employees.empty())
                cout << "No employee accounts exist. \n";
            else
                // cout << "Employee accounts exist!!!! \n";
                Bank::employee_login();
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

experimental::optional<Customer> Bank::customer_login()
{
    int user_id;
    string password;
    tie(user_id, password) = Bank::get_credentails();
    cout << user_id << password;
    return {};

}

experimental::optional<Employee> Bank::employee_login()
{
    int user_id;
    string password;
    tie(user_id, password) = Bank::get_credentails();
    cout << user_id << password;
    return {};
}

tuple<int, string> Bank::get_credentails()
{
    int user_id;
    string password;
    cout << "User Id: ";
    cin >> user_id;
    cout << "User Password: ";
    cin >> password;
    return make_tuple(user_id, password);
}



tuple<string, string, string> Bank::get_user_details()
{
    string user_name;
    string address;
    string password;
    cout << "User Id: ";
    cin >> user_name;
    cout << "User Address: ";
    cin >> address;
    cout << "User Password: ";
    cin >> password;
    return make_tuple(user_name, address, password);
}