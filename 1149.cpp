#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<vector<int>> RGB(N, vector<int>(3));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < 3; j++)
            cin >> RGB[i][j];
     
    vector<vector<int>> dp(N, vector<int>(3, 0));

    // 첫 번째 집 초기화
    dp[0] = RGB[0];

    // DP 채우기
    for (int i = 1; i < N; i++) 
    {
        dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + RGB[i][0];
        dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + RGB[i][1];
        dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + RGB[i][2];
    }

    // 최종 최소값 출력
    int answer = min({ dp[N - 1][0], dp[N - 1][1], dp[N - 1][2] });
    cout << answer << '\n';

    return 0;
}