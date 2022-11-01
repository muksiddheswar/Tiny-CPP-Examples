#include "account.h"
#include "customer.h"
#include "employee.h"

using namespace std;
#pragma once

class Bank 
{
   public:
        Bank(string bank_name);

    private:
        string bank_name;
        vector<Account> all_accounts;
        vector<Customer> all_customers;
        vector<Employee> all_employees;


};
