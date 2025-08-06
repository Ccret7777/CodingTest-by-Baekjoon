using namespace std;
#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using int64 = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64 N, M;
    cin >> N >> M;

    unordered_map<int64, string> m1;
    unordered_map<string, int64> m2;

    for (int i = 0; i < N; i++)
    {
        string name;
        cin >> name;
        m1[i + 1] = name;
        m2[name] = i + 1;
    }

    vector<string> v(M);

    for (int i = 0; i < M; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < M; i++)
    {
        // 숫자라면? 알파벳을 출력해야 함
        if (!v[i].empty() && isdigit(static_cast<unsigned char>(v[i][0])))
        {
            int num = stoi(v[i]);  // 문자열을 숫자로 변환
            cout << m1[num] << '\n';
        }

        else
        {
            cout << m2[v[i]] << '\n';
        }
    }
}
