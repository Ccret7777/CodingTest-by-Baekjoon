using namespace std;
#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

int N;
vector<vector<int>> v;
vector<bool> selected;
int result = INT_MAX;

int CalDiff()
{
    int startSum = 0;
    int linkSum = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (selected[i] && selected[j])
                startSum += v[i][j] + v[j][i];

            else if (!selected[i] && !selected[j])
                linkSum += v[i][j] + v[j][i];
        }
    }
    return abs(startSum - linkSum);
}

void Dfs(int idx, int count)
{
    if (count == N / 2)
    {
        result = min(result, CalDiff());
        return;
    }

    for (int i = idx; i < N; i++)
    {
        selected[i] = true;
        Dfs(i + 1, count + 1);
        selected[i] = false;
    }
}

int main()
{
    cin >> N;

    v.assign(N, vector<int>(N));
    selected.assign(N, false);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> v[i][j];

    Dfs(0, 0);
    cout << result << '\n';

    return 0;
}
