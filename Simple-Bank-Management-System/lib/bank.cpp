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
}

void Bank::bank_main()
{
    int user_input;
    int user_input_n;
    cout<< "0: Exit. \n";
    cout<< "1: Login. \n" ;
    cout<< "2: Create new user. \n" ;
    cout<< "3: Open a bank account. \n" ;
    cin >> user_input;

    if (user_input == 0)
        return;

    if (user_input == 1)
    {
        user_input_n = login_choice() ;
        if (user_input_n == 1)
        {
            auto my_customer = Bank::find_user(all_customers, "Customer");
            if (my_customer)
            {
                cout << "Found!"<< endl;
            }
        }

        if (user_input_n == 2)
        {
            if (all_employees.empty())
                cout << "No employee accounts exist. \n";
            else
            {
                auto my_employee = Bank::find_user(all_employees, "Employee");
                if (my_employee)
                {
                    cout << "Found!"<< endl;
                }
            }
        }
    }

    else if (user_input == 2)
    {
        cout << "Open Account \n";
    }
    
    cout << "\n";
    bank_main();
}

int open_account(experimental::optional<Customer> logged_in_customer)
{
    Account new_account;
    if (logged_in_customer)
    {

    }

    else
    {
        cout << "Login or create new user. \n";
        return 0;
    }
}

int Bank::login_choice()
{
    int user_input_n;
    cout << "\nLogin: \n";
    cout << "1. Customer. \n";
    cout << "2. Employee. \n";
    cin >> user_input_n;
    return user_input_n;
}

template <typename T> experimental::optional<T> Bank::find_user(unordered_map<int, T> x, string user_type)
{
    int user_id;
    string password;
    if(x.empty())
    {
        cout << "No " + user_type + " present in database.\n";
        return {};

    }
    
    else
    {
        tie(user_id, password) = Bank::get_credentails();
        auto got = x.find(user_id);
        if ( got != x.end() )
        {
            T e = got->second;
            if (e.verify_password(password))
            {
                e.get_user_information();
                return e;
            }
        }
    }
    cout << "User " + to_string(user_id) + " not found or password incorrect!"<< endl;
    return {};
}

experimental::optional<Customer> Bank::customer_login()
{
    int user_id;
    string password;
    tie(user_id, password) = Bank::get_credentails();

    std::unordered_map<int, Customer>::const_iterator got = all_customers.find (user_id);
    if ( got != all_customers.end() )
    {
        Customer e = got->second;
        if (e.verify_password(password))
        {
            e.get_user_information();
            return e;
        }
    }
    
    cout << "User " + to_string(user_id) + " not found or password incorrect!"<< endl;
    return {};
}

tuple<int, string> Bank::get_credentails()
{
    int user_id;
    string password;
    cout << "\nUser Id: ";
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