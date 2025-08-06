using namespace std;
#include <iostream>

int main()
{
	int H, M;
	cin >> H >> M;

	int result = H * 60;
	result = result + M - 45;

	if (result < 0) result = result + 24 * 60;

	H = result / 60;
	M = result % 60;

	cout << H << " " << M << endl;

	return 0;
}
