#include <iostream>
#include <vector>

using namespace std;

// Driver Code
int main()
{
    vector<int> v = { 1, 5, 10, 15, 20 };
 
    // Changing vector while iterating over it
    // (This causes iterator invalidation)
    int loop_counter = 1;
    for (auto it = v.begin(); it != v.end(); it++, loop_counter++){
        if ((*it) == 5)
            v.push_back(-1);
    }
    cout <<loop_counter;

    // Print vector
    cout << endl;
    for (auto it = v.begin(); it != v.end(); it++)
        cout << (*it) << " ";
    
    return 0;
}