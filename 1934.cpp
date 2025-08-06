using namespace std;
#include <iostream>

using int64 = long long;

// 최대공약수 (GCD) 함수
int gcd(int a, int b) 
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main()
{
    int T;
    cin >> T;

    while (T--) 
    {
        int A, B;
        cin >> A >> B;

        int g = gcd(A, B);
        cout << (A * B) / g << '\n'; // 최소공배수 출력
    }

    return 0;
}
