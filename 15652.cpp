using namespace std;
#include <iostream>
#include <vector>

int N, M;
vector<int> v;

void Dfs(int start)
{
    if (v.size() == M)
    {
        for (int x : v)
            cout << x << " ";
        cout << '\n';
        return;
    }

    for (int i = start; i <= N; i++)
    {
        v.push_back(i);
        Dfs(i);   // 다음부턴 i보다 큰 수만 선택
        v.pop_back();
    }
}

int main()
{
    cin >> N >> M;
    Dfs(1);

    return 0;
}
