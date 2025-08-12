using namespace std;
#include <iostream>
#include <vector>

vector<vector<int>> stoque(9, vector<int>(9)); // 9x9
vector<pair<int, int>> blanks;   // 빈 칸 좌표
bool finished = false;  // 정답 찾았는지

bool Check(int y, int x, int num)
{
    // 가로 확인
    for (int i = 0; i < 9; i++)
        if (stoque[y][i] == num) return false;
    
    // 세로 확인
    for (int i = 0; i < 9; i++)
        if (stoque[i][x] == num) return false;

    // 3x3박스 확인
    int sy = (y / 3) * 3;
    int sx = (x / 3) * 3;
    for (int j = sy; j < sy + 3; j++)
        for (int i = sx; i < sx + 3; i++)
            if (stoque[j][i] == num) return false;

    return true;
}

void Dfs(int idx)
{
    // 모든칸 채움 -> 출력
    if (idx == blanks.size())
    {
        for (int j = 0; j < 9; j++)
        {
            for (int i = 0; i < 9; i++)
            {
                cout << stoque[j][i] << " ";
            }
            cout << '\n';
        }
        finished = true;
        return;
    }

    int y = blanks[idx].first;
    int x = blanks[idx].second;

    for (int num = 1; num <= 9; num++)
    {
        if (Check(y, x, num))
        {
            stoque[y][x] = num;
            Dfs(idx + 1);
            if (finished) return;
            stoque[y][x] = 0;
        }
    }
}

int main()
{
    for (int j = 0; j < 9; j++)
    {
        for (int i = 0; i < 9; i++)
        {
            cin >> stoque[j][i];
            if (!stoque[j][i])
                blanks.push_back({ j, i });
        }
    }

    Dfs(0);

    return 0;
}
