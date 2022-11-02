#include "account.h"
#include "customer.h"
#include "employee.h"

using namespace std;
#pragma once

class Bank 
{
   public:
        Bank(string bank_name);
        void bank_main();
        int customer_login();
        Employee employee_login();
        void get_credentails(string* user_name, string* password);

    private:
        string bank_name;
        vector<Account> all_accounts;
        vector<Customer> all_customers;
        vector<Employee> all_employees;


};
