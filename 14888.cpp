using namespace std;
#include <iostream>
#include <vector>
#include <climits>

using int64 = long long;

int maxValue = LLONG_MIN;
int minValue = LLONG_MAX;

vector<int64> nums;
vector<int> opers(4);  // +, -, *, / 개수

void Dfs(int idx, int64 current)
{
    // idx: 현재 몇 번째 숫자까지 계산했는지
    if (idx == (int)nums.size())
    {
        // 숫자를 다 사용했으면 값 갱신
        if (current > maxValue) maxValue = current;
        if (current < minValue) minValue = current;
        return;
    }

    // 각 연산자 시도
    for (int op = 0; op < 4; op++)
    {
        if (opers[op] > 0)
        {
            opers[op]--;  // 연산자 개수 한개 차감
            if (op == 0) Dfs(idx + 1, current + nums[idx]);
            else if (op == 1) Dfs(idx + 1, current - nums[idx]);
            else if (op == 2) Dfs(idx + 1, current * nums[idx]);
            // C++ 정수 나눗셈 주의: 음수 처리 문제
            else if (op == 3)
            {
                if (current < 0)
                    Dfs(idx + 1, -(-current / nums[idx]));
                else
                    Dfs(idx + 1, current / nums[idx]);
            }
            opers[op]++;  // 상태 복원
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    nums.resize(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];
    for (int i = 0; i < 4; i++)
        cin >> opers[i];

    Dfs(1, nums[0]);

    cout << maxValue << '\n' << minValue << '\n';

    return 0;
}
