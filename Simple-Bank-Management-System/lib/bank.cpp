#include <iostream>
// #include "../include/user.h"
// #include "../include/account.h"
#include "../include/bank.h"

using namespace std;

Bank::Bank(string bank_name)
{
    this->bank_name = bank_name;
    cout << bank_name + " initialised.";
}

void Bank::bank_main()
{
    int user_input;
    cout<< "1: Login. \n" ;
    cout<< "2: Open an account. \n" ;
    cout<< "3: Exit. \n";
    cin >> user_input;

    if (user_input == 1)
    {
        cout << "Login \n";
    }

    else if (user_input == 2)
    {
        cout << "Open Account \n";
    }

    else if (user_input == 3)
    {
        return;
    }

    bank_main();
    
    



    // switch (user_input)
    // {
    // case /* constant-expression */:
    //     /* code */
    //     break;
    
    // default:
    //     break;
    // }

}