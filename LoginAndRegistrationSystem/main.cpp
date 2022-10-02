# include <iostream>
#include <fstream>
using namespace std;

int RegisterUser(){

    string name, password;
    cout<<"Enter UserName: ";
    cin>>name;
    cout<<"Enter Password: ";
    cin>>password;

    // Create and open a text file
    ofstream MyFile(name+".txt");
    // Write to the file
    MyFile << password;

    // Close the file
    MyFile.close();

}

int LoginUser(){

    string name, password, MyText;
    cout<<"Enter UserName: ";
    cin>>name;
    cout<<"Enter Password: ";
    cin>>password;

    ifstream MyFile(name+".txt");

    getline (MyFile, MyText);

    if (MyText == MyText)
        return true;
    else
        return false;

    // Close the file
    MyFile.close();

}

int main(){
    int response;
    bool validated;
    cout<<"1: Register \n2: Login\n";
    cin>>response;

    switch (response)
    {
    case 1:
        RegisterUser();
        break;

    case 2:
        validated = LoginUser();
        if (validated)
            cout<<"Login succesfull!";
        else
            cout<<"Login failed! Wrong username/ password.";
        break;

    default:
        cout<<"Not a valid input. Exiting...";
        break;
    }



    return 0;
}