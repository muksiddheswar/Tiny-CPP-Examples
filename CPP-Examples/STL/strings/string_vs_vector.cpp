#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char ch = 'i';
    const char *chp = "i";
    string  s1 = "i";
    vector <char> s2;
    char test [] = "This is it";

    // for (auto it = test.begin(); it != test.end(); it++)
    //     cout << (*it) << " ";
    // s2.push_back('t');

    cout << ch << endl;
    cout << chp << endl;
    cout << s1 << endl;

    // ch = 'this is it';
    chp = "this is it";
    s1 = "this is it";

    cout << ch << endl;
    cout << chp << endl;
    cout << s1 << endl;

    cout << test << endl;

    // for (auto it = s2.begin(); it != s2.end(); it++)
    //     cout << (*it) << " ";



}