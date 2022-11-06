#include "account.h"
#include "customer.h"
#include "employee.h"
# include <experimental/optional>
# include <unordered_map>

using namespace std;
#pragma once

class Bank 
{
   public:
        Bank(string bank_name);
        void bank_main();
        experimental::optional<Customer> customer_login();
        experimental::optional<Employee> employee_login();
        tuple<int, string> get_credentails();
        tuple<string, string, string> get_user_details();
        void create_user();

    private:
        string bank_name;
        vector<Account> all_accounts;
        // vector<Customer> all_customers;
        unordered_map<int, Customer> all_customers;
        // vector<Employee> all_employees;
        unordered_map<int, Employee> all_employees;


};
