using namespace std;
#include <iostream>

using int64 = long long;

int64 Facto(int n)
{
    if (n == 0 || n == 1) return 1;

    return n * Facto(n - 1);
}

int main()
{
    int N;
    cin >> N;

    cout << Facto(N) << '\n';

    return 0;
}
