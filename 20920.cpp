using namespace std;
#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>

using int64 = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64 N;
    int M;
    cin >> N >> M;

    unordered_map<string, int> m;

    for (int i = 0; i < N; i++)
    {
        string word;
        cin >> word;

        if (word.length() < M)
            continue;

        m[word]++;
    }

    // map → vector 로 옮기기
    vector<pair<string, int>> v(m.begin(), m.end());

    sort(v.begin(), v.end(), [](const auto& a, const auto& b)
        {
            if (a.second != b.second) return a.second > b.second;
            if (a.first.length() != b.first.length()) return a.first.length() > b.first.length();
            return a.first < b.first;
        });

    for (auto& word : v)
    {
        cout << word.first << '\n';
    }

    return 0;
}
