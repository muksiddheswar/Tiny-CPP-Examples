// CPP program to illustrate Pair in STL
#include <iostream>
#include <utility>
using namespace std;

// Driver Code
int main()
{
	// defining a pair
	pair<int, char> PAIR1;
	pair<int,char> g2(PAIR1);

	// first part of the pair
	PAIR1.first = 100;
	// second part of the pair
	PAIR1.second = 'G';

	cout << PAIR1.first << " ";
	cout << PAIR1.second << endl;

	PAIR1 = make_pair(1, 'w');
	cout << PAIR1.first << " ";
	cout << PAIR1.second << endl;

	cout << g2.first << " ";
	cout << g2.second << endl;

	return 0;
}
