using namespace std;
#include <iostream>
#include <string>
#include <sstream>

int main()
{
	string s;
	getline(cin, s);

	stringstream ss(s);
	string word;
	int count = 0;

	while (ss >> word) count++;    // 공백 기준으로 단어 분리

	cout << count << '\n';

	return 0;
}


