using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility> 
#include <map>

int main()
{
    long long N;
    cin >> N;

    vector<long long> x(N);
    vector<long long> temp;

    for (int i = 0; i < N; i++)
    {
        cin >> x[i];
        temp.push_back(x[i]);
    }

    sort(temp.begin(), temp.end());
    temp.erase(unique(temp.begin(), temp.end()), temp.end());   // 중복 제거

    map<long long, long long> m;

    for (int i = 0; i < temp.size(); i++)
        m[temp[i]] = i;

    for (int i = 0; i < N; i++)
    {
        cout << m[x[i]] << " ";
    }
}
