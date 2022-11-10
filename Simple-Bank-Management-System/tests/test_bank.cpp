#include <iostream>
#include "../include/bank.h"

using namespace std;

int test_bank()
{
    Bank m = Bank("Bank of Belgium");
    m.bank_main();
    // m.get_user_details();
    getchar();
    return 0;
}