using namespace std;
#include <iostream>
#include <vector>

int N, M;
vector<bool> used;
vector<int> v;

void Dfs(int depth)
{
    if (depth == M)
    {
        for (int i = 0; i < M; i++)
            cout << v[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = 1; i <= N; i++)
    {
        if (!used[i])
        {
            used[i] = true;
            v[depth] = i;
            Dfs(depth + 1);
            used[i] = false;
        }
    }
}

int main()
{
    cin >> N >> M;
    used.assign(N + 1, false); // 크기 재설정
    v.assign(M, 0);

    Dfs(0);


    return 0;
}
