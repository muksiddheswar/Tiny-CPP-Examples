// CPP program to demonstrate
// how to assign constant values to a vector

#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v;
	v.assign(7, 100);

	cout << "Size of first: "
	<< int(v.size()) << '\n';

	cout << "Elements are\n";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;

    v.assign(5, 111);

    cout << "\nElements are\n";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;
    cout << "Size of second: "
	<< int(v.size()) << '\n';
    cout << int(v.capacity()) << '\n';

	return 0;
}
