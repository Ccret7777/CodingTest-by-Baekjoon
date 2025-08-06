#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a;
	cin >> b;

	int x = b % 10;
	cout << x * a << endl;

	x = (b / 10) % 10;
	cout << x * a << endl;

	x = b / 100;
	cout << x * a  << endl;
	cout << a * b << endl;

	return 0;
}
