// CPP code to demonstrate replace()
 
#include <iostream>
using namespace std;

int main()
{
    string s1 = "Example of replace";
    string s2 = "Demonstration";
    string s3 = "GeeksforGeeks";
    string s4 = "HeyWorld !";
 
    cout << "Sizeof - " << sizeof(s1) << endl;
    cout << "Capacity - " << s1.capacity() << endl;
    cout << "Size - " <<s1.size() << endl;
    // cout << s1.max_size() << endl;

    s1.push_back('X');

    cout << endl<< "Sizeof - " << sizeof(s1) << endl;
    cout << "Capacity - " << s1.capacity() << endl;
    cout << "Size - " <<s1.size() << endl;    



    
    // s1.replace(0, 7, s2);
    // cout << s1 << endl;
 
    return 0;
}
