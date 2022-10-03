#include <iostream>
using namespace std;

class Box {
    public:
        double getVolume(void) {
            return length * breadth * height;
        }
        void setLength( double len ) {
            length = len;
        }
        void setBreadth( double bre ) {
            breadth = bre;
        }
        void setHeight( double hei ) {
            height = hei;
        }
        
        // Overload + operator to add two Box objects.
        Box operator+(const Box& b) {
            Box box;
            box.length = this->length + b.length;
            box.breadth = this->breadth + b.breadth;
            box.height = this->height + b.height;
            return box;
        }

        // Overload > operator to comapre two Box objects.
        bool operator>(const Box b) {
            double v1 = this->length * this->breadth * this->height;
            double v2 = b.length * b.breadth * b.height;
            if (v1 > v2)
                return true;
            return false;
        }
        
    private:
        double length;        // Length of a box
        double breadth;      // Breadth of a box
        double height;        // Height of a box
};

// One function works for all data types. This would work
// even for user defined types if operator '>' is overloaded
template <typename T> T myMax(T x, T y)
{
	return (x > y) ? x : y;
}

int main()
{
    Box Box1;                     // Declare Box1 of type Box
    Box Box2;                     // Declare Box2 of type Box

	cout << myMax<int>(3, 7) << endl; // Call myMax for int
	cout << myMax<double>(3.0, 7.0) << endl; // call myMax for double
	cout << myMax<char>('g', 'e') << endl; // call myMax for char

    // box 1 specification
    Box1.setLength(6.0); 
    Box1.setBreadth(7.0); 
    Box1.setHeight(5.0);
 
    // box 2 specification
    Box2.setLength(12.0); 
    Box2.setBreadth(13.0); 
    Box2.setHeight(10.0);

    cout << myMax<Box>(Box1,Box2);

	return 0;
}
