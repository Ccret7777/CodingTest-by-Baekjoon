using namespace std;
#include <iostream>

using int64 = long long;

int64 Factorial(int n, int r)
{
    if (r > n - r) r = n - r;

    int64 result = 1;
    for (int i = 1; i <= r; ++i)
    {
        result *= (n - i + 1);
        result /= i;
    }
    return result;
}

int main()
{
    int T;
    cin >> T;

    int N, M;
    while (T--)
    {
        cin >> N >> M;

        cout << Factorial(M, N) << '\n';
    }

    return 0;
}
