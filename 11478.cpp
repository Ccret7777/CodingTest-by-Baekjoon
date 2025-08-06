using namespace std;
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string S;
	cin >> S;

	unordered_set<string> s;  // 자동 중복 제거

	for (int i = 0; i < S.size(); i++)
	{
		string temp = "";
		for (int j = i; j < S.size(); j++)
		{
			temp += S[j];
			s.insert(temp);
		}
	}

	cout << s.size() << '\n';

	return 0;
}