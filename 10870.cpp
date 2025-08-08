using namespace std;
#include <iostream>

using int64 = long long;

int64 Fibo(int n)
{
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;

    return Fibo(n - 1) + Fibo(n - 2);
}

int main()
{
    int n;
    cin >> n;

    cout << Fibo(n) << '\n';

    return 0;
}
