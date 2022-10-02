# include <iostream>
# include <conio.h>
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

    cout<<"User registered.";

}

int LoginUser(){

    string name, password, MyText;
    cout<<"Enter UserName: ";
    cin>>name;
    cout<<"Enter Password: ";
    cin>>password;

    ifstream MyFile(name+".txt");

    // Read from file.
    getline (MyFile, MyText);

    if (MyText == password)
        return true;
    else
        return false;

    // Close the file
    MyFile.close();

}

void PressAKeyToContinue(){
  int c;
  printf( "\nPress a key to continue..." );
  c = getch();
  if (c == 0 || c == 224) getch();
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
    PressAKeyToContinue();
    
    return 0;
}