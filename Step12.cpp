using namespace std;
#include <iostream>
#include <vector>

int main()
{
    int N;
    long long M;
    vector<int> v;

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    int maxSum = 0;

    for (int i = 0; i < N - 2; ++i) 
    {
        for (int j = i + 1; j < N - 1; ++j) 
        {
            for (int k = j + 1; k < N; ++k)
            {
                int sum = v[i] + v[j] + v[k];
                if (sum <= M && sum > maxSum) 
                {
                    maxSum = sum;
                }
            }
        }
    }

    cout << maxSum << '\n';
}
