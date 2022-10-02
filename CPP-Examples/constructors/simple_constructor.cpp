// Intialisse object twice.

#include <iostream>
using namespace std;

class MyClass {     // The class
  public:           // Access specifier
    int i;

    MyClass() {     // Constructor
      cout << "Hello World!";
      i = 0;
    }

    MyClass(int i1) {     // Constructor
      i = i1;
      cout << "Stored";
    }
};

int main() {
  MyClass myObj;    // Create an object of MyClass (this will call the constructor)
  myObj = MyClass(12);
  return 0;
}
