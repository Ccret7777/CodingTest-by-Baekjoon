using namespace std;
#include <iostream>
#include <string>

int main()
{
    long long N;
    int B;

    cin >> N >> B;

    string result = "";

    while (N > 0)
    {
        int remain = N % B;
        if (remain < 10)
            result = char('0' + remain) + result;
        else
            result = char('A' + (remain-10)) + result;
        N /= B;
    }

    cout << result << '\n';

    return 0;
}
