using namespace std;
#include <iostream>
#include <vector>

using int64 = long long;

bool IsPrime(int64 n)
{
    if (n == 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i++)
    {
        if (n % i == 0) return false;
    }

    return true;
}

int main()
{
    int64 N, M;
    cin >> N >> M;
    vector<int64> v;

    for (int64 i = N; i <= M; i++)
    {
        if (IsPrime(i))
            v.push_back(i);
    }

    for (int64 i = 0; i < v.size(); i++)
        cout << v[i] << '\n';
}
