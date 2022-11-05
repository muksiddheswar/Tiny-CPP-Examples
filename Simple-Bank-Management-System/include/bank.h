#include "account.h"
#include "customer.h"
#include "employee.h"
# include <experimental/optional>

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

    private:
        string bank_name;
        vector<Account> all_accounts;
        vector<Customer> all_customers;
        vector<Employee> all_employees;


};
