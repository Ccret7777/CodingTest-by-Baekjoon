using namespace std;
#include <iostream>

int Gcd(int a, int b)
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
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    int g = (b * d) / Gcd(b, d);

    int num1 = g / b;
    b *= num1;
    a *= num1;

    int num2 = g / d;
    d *= num2;
    c *= num2;

    int num3 = a + c;
    int g2 = Gcd(b, num3);

    b = b / g2;
    num3 = num3 / g2;
    cout << num3 << " " << b << '\n';
}
