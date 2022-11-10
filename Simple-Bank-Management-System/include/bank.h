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
        tuple<int, string> get_credentails();
        tuple<string, string, string> get_user_details();
        void create_user();
        int open_account(experimental::optional<Customer> logged_in_customer);
        int login_choice();
        template <typename T> experimental::optional<T> user_login(unordered_map<int, T> x, string user_type);
        void create_customer();
        int get_new_id(int* last_id);

    private:
        string bank_name;
        vector<Account> all_accounts;
        unordered_map<int, Customer> all_customers;
        unordered_map<int, Employee> all_employees;
        int last_customer_id;
        int last_employee_id;
        int last_account_number;


};
