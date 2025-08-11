using namespace std;
#include <iostream>
#include <vector>

int N, M;
vector<int> v;

void Dfs(int depth)
{
    if (depth == M)
    {
        for (int x : v)
            cout << x << " ";
        cout << '\n';
        return;
    }

    for (int i = 1; i <= N; i++)
    {
        v[depth] = i;
        Dfs(depth + 1);
    }
}

int main()
{
    cin >> N >> M;
    v.assign(M, 0);

    Dfs(0);

    return 0;
}
