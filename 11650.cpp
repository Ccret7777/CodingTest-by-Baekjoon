using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

int main()
{
    long long N;
    cin >> N;

    vector<pair<long long, long long>> v;

    for (long long i = 0; i < N; i++)
    {
        long long x, y;
        cin >> x >> y;
        v.push_back({ x, y });
    }

    sort(v.begin(), v.end());

    for (long long i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << '\n';
    }
}
