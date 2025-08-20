using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

using int64 = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64 n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> dp(n);
    dp[0] = v[0];
    int maxSum = v[0];

    for (int i = 1; i < n; i++) 
    {
        dp[i] = max(v[i], dp[i - 1] + v[i]); // 이어가기 vs 새로 시작
        maxSum = max(maxSum, dp[i]);         // 최대값 갱신
    }

    cout << maxSum << '\n';

    return 0;
}
