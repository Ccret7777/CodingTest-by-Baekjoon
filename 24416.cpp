using namespace std;
#include <iostream>

// 동적 계획법: 재귀호출로 계속 호출하지 않고 이전에 계산한 값을 저장해서 다시 쓰는 방식

int count1 = 0;
int count2 = 0;

int Fibo1(int n)
{
    if (n == 1 || n == 2)
    {
        count1++;
        return 1;
    }

    else
        return Fibo1(n - 1) + Fibo1(n - 2);
}

int Fibo2(int n)
{
    int f[50];
    f[1] = f[2] = 1;

    for (int i = 3; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
        count2++;   // n - 2번 덧셈 수행
    }

    return f[n];
}

int main()
{
    int n;
    cin >> n;

    Fibo1(n);
    Fibo2(n);

    cout << count1 << " " << count2 << '\n';

    return 0;
}
