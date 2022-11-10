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
    last_employee_id = 1000000;
    last_customer_id = 5000000;
    last_account_number = 9000000;

    int i = get_new_id(&last_employee_id);
    Employee root_employee = Employee(i, "root", "HQ", "root");
    this->all_employees[i] = root_employee;
}

void Bank::bank_main()
{
    int user_input;
    int user_input_n;
    cout<< "0: Exit. \n";
    cout<< "1: Login. \n" ;
    cout<< "2: Create new customer. \n" ;
    cin >> user_input;

    // Exit
    if (user_input == 0)
        return;

    // Login
    if (user_input == 1)
    {
        cout << "\nLogin: \n";
        user_input_n = login_choice() ;
        if (user_input_n == 1)
        {
            auto my_customer = Bank::user_login(all_customers, "Customer");
            if (my_customer)
            {
                cout << "Found!"<< endl;
            }
        }

        if (user_input_n == 2)
        {
            auto my_employee = Bank::user_login(all_employees, "Employee");
            if (my_employee)
            {
                cout << "Found!"<< endl;
            }
        }
    }

    // Create new customer.
    else if (user_input == 2)
    {
        cout << "\nCreate New Customer \n";
        create_customer();
    }
    
    cout << "\n";
    bank_main();
}

// int open_account(experimental::optional<Customer> logged_in_customer)
// {
//     Account new_account;
//     if (logged_in_customer)
//     {

//     }

//     else
//     {
//         cout << "Login or create new user. \n";
//         return 0;
//     }
// }

int Bank::login_choice()
{
    int user_input_n;
    cout << "\nLogin: \n";
    cout << "1. Customer. \n";
    cout << "2. Employee. \n";
    cin >> user_input_n;
    return user_input_n;
}

int Bank::get_new_id(int* user_id_holder)
{
    *user_id_holder += 1;
    return *user_id_holder;
}


void Bank::create_customer()
{
    string user_name, address, password;
    int new_customer_id = get_new_id(&last_customer_id);
    tie(user_name, address, password) = get_user_details();
    Customer new_customer = Customer(new_customer_id, user_name, address, password);
    all_customers[new_customer_id] = new_customer;
    cout << "Customer Created: " <<endl;
    new_customer.get_user_information();
}

template <typename T> experimental::optional<T> Bank::user_login(unordered_map<int, T> user_map, string user_type)
{
    int user_id;
    string password;
    if(user_map.empty())
    {
        cout << "No " + user_type + " present in database.\n";
        return {};

    }
    
    else
    {
        tie(user_id, password) = Bank::get_credentails();
        auto got = user_map.find(user_id);
        if ( got != user_map.end() )
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
    string user_name, address, password;
    cout << "User Name: ";
    cin >> user_name;
    cout << "User Address: ";
    cin >> address;
    cout << "User Password: ";
    cin >> password;
    return make_tuple(user_name, address, password);
}