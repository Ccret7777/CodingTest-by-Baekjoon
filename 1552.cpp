using namespace std;
#include <iostream>

int main()
{
	ios::sync_with_stdio(false); // C와 C++의 입출력 분리
	cin.tie(NULL);               // cin과 cout의 연결 끊기

	int T;
	cin >> T;

	int A, B;
	for (int i = 0; i < T; i++)
	{
		cin >> A >> B;
		cout << "Case #" << i + 1 << ": " << A << " + " << B << " = " << A + B << '\n';
	}
}
