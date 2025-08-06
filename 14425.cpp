using namespace std;
#include <iostream>
#include <unordered_set>
#include <string>

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    unordered_set<string> S;   // 중복없이 저장. map과 달리 키만 저장.

    for (int i = 0; i < N; i++)
    {
        string temp;
        cin >> temp;
        S.insert(temp);
    }

    int count = 0;

    for (int i = 0; i < M; i++)
    {
        string temp;
        cin >> temp;

        if (S.find(temp) != S.end())   // temp가 S에 존재?
            count++;
    }

    cout << count << '\n';
}
