#include <iostream>
#include <vector>

using namespace std;

// Driver Code
int main()
{
    string str = "125345675895";
 
    // Changing vector while iterating over it
    // (This causes iterator invalidation)
    int loop_counter = 1;

    cout <<str.length() << endl;

    cout << &str[0] ;
    
    // for (auto it = str.begin(); it != str.end(); it++, loop_counter++){
    //     if ((*it) == '5')
    //         str.push_back('x');
    //         // cout << "here" << endl;
    // }
    // cout <<loop_counter;

    // Print vector
    // cout << endl << str;
    
    return 0;
}