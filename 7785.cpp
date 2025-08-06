using namespace std;
#include <iostream>
#include <unordered_map>
#include <algorithm>

using int64 = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64 n;
    cin >> n;

    unordered_map<string, string> m;

    for (int i = 0; i < n; i++)
    {
        string name;
        string condition;
        cin >> name >> condition;

        m[name] = condition;
    }

    vector<string> result;
    for (const auto& entry : m)
    {
        if (entry.second == "enter")
        {
            result.push_back(entry.first);
        }
    }

    sort(result.rbegin(), result.rend());    // 내림차순

    for (const auto& name : result)
        cout << name << '\n';
}
