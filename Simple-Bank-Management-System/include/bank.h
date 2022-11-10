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
        void create_user();
        int login_choice();
        void create_customer();
        int get_new_id(int* last_id);
        tuple<int, string> get_credentails();
        tuple<string, string, string> get_user_details();
        int open_account(experimental::optional<Customer> logged_in_customer);
        template <typename T> experimental::optional<T> user_login(unordered_map<int, T> x, string user_type);

    private:
        string bank_name;
        int last_customer_id, last_employee_id, last_account_number;
        vector<Account> all_accounts;
        unordered_map<int, Customer> all_customers;
        unordered_map<int, Employee> all_employees;


};
