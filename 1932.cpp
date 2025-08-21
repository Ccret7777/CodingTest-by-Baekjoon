using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> trangle(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cin >> trangle[i][j];
        }
    }

    // DP 진행 (위에서부터 내려오기)
    for (int i = 1; i < n; i++) // 두 번째 줄부터 시작
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0) // 왼쪽 끝
                trangle[i][j] += trangle[i - 1][j];
            else if (j == i) // 오른쪽 끝
                trangle[i][j] += trangle[i - 1][j - 1];
            else // 가운데
                trangle[i][j] += max(trangle[i - 1][j - 1], trangle[i - 1][j]);
        }
    }

    // 마지막 줄에서 최대값 찾기
    int result = *max_element(trangle[n - 1].begin(), trangle[n - 1].begin() + n);
    cout << result << "\n";

    return 0;
}
