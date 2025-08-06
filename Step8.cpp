using namespace std;
#include <iostream>
#include <string>
#include <cmath>

int main()
{
    string N;
    int B;
    cin >> N >> B;

    int result = 0;
    int power = 1;

    for (int i = N.length() - 1; i >= 0; i--)
    {
        char c = N[i];
        int value;

        if ('0' <= c && c <= '9')
            value = c - '0';
        else
            value = c - 'A' + 10;

        result += value * power;
        power *= B;
    }

    cout << result << '\n';

    return 0;
}
