using namespace std;
#include <iostream>

using int64 = long long;

int64 P(int n)
{
    int64 p[110];
    p[1] = p[2] = p[3] = 1;
    p[4] = p[5] = 2;
    p[6] = 3;
    p[7] = 4;
    p[8] = 5;
    p[9] = 7;
    p[10] = 9;

    for (int i = 11; i <= n; i++)
    {
        p[i] = p[i - 2] + p[i - 3];
    }

    return p[n];
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        cout << P(N) << '\n';
    }

    return 0;
}
