using namespace std;
#include <iostream>
#include <vector>

int N;
vector<int> queens;
int result = 0;

bool IsSafe(int y, int x)
{
    for (int row = 0; row < y; row++)
    {
        int c = queens[row];
        if (c == x) return false;  // 같은 열
        if (abs(row - y) == abs(x - c)) return false;  // 대각선
    }
    return true;
}

void Dfs(int y)
{
    if (y == N)
    {
        result++;
        return;
    }

    for (int x = 0; x < N; x++)
    {
        if (IsSafe(y, x))
        {
            queens[y] = x;
            Dfs(y + 1);
        }
    }
}

int main()
{
    cin >> N;
    queens.resize(N);
    Dfs(0);

    cout << result << '\n';
    return 0;
}
