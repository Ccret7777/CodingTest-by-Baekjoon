using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility> 

struct Info
{
    int age;
    string name;
};

int main()
{
    long long N;
    cin >> N;

    vector<pair<Info, long long>> v;

    for (int i = 0; i < N; i++)
    {
        Info info;
        cin >> info.age >> info.name;

        v.push_back({ info, i + 1 });
    }

    sort(v.begin(), v.end(), [](const pair<Info, long long>& a, const pair<Info, long long>& b)
        {
            if (a.first.age != b.first.age) 
                return a.first.age < b.first.age; 
            return a.second < b.second;
        });

    for (auto& it : v)
    {
        cout << it.first.age << " " << it.first.name << '\n';
    }
 }
