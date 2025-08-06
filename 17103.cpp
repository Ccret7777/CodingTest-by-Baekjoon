#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1000000;
vector<bool> is_prime(MAX + 1, true);

void Sieve() 
{
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= MAX; i++) 
    {
        if (is_prime[i]) 
        {
            for (int j = i * i; j <= MAX; j += i) 
            {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Sieve();

    int T;
    cin >> T;
    while (T--) 
    {
        int n;
        cin >> n;
        int count = 0;

        for (int i = 2; i <= n / 2; i++) 
        {
            if (is_prime[i] && is_prime[n - i]) 
            {
                count++;
            }
        }

        cout << count << '\n';
    }

    return 0;
}