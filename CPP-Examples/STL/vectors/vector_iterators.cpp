// C++ program to illustrate the
// iterators in vector
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> g1;
	vector<int> g2;

	for (int i = 1; i <= 5; i++)
	{
		g1.push_back(i);
		g2.push_back(i);
	}

	cout << "Output of begin and end: ";
	for (auto i = g1.begin(); i != g1.end(); ++i)
		cout << *i << " ";

	cout << "\nOutput of cbegin and cend: ";
	for (auto i = g1.cbegin(); i != g1.cend(); ++i)
		cout << *i << " ";

	cout << "\nOutput of rbegin and rend: ";
	for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
		cout << *ir << " ";

	cout << "\nOutput of crbegin and crend : ";
	for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
		cout << *ir << " ";

	*g1.rbegin() = 21;
	// *g1.crbegin() = 21; // Compiler error. Nt posssible because a constant pointer is returned.
	cout << "\nOutput of begin and end: ";
	for (auto i = g1.begin(); i != g1.end(); ++i)
		cout << *i << " ";

	g1.rbegin() = g2.rbegin();
	cout << "\n\nHere: "<<*g1.rbegin();
	cout << "\nHere: "<<*g2.rbegin();

	return 0;
}
