using namespace std;
#include <iostream>
#include <queue>
#include <string>

using int64 = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64 N;
    cin >> N;

    queue<int64> q;

    while (N--)
    {
        string s;
        cin >> s;

        if (s == "push")
        {
            int64 X;
            cin >> X;
            q.push(X);
        }

        else if (s == "pop")
        {
            if (q.empty()) cout << -1 << '\n';
            else
            {
                cout << q.front() << '\n';
                q.pop();
            }
        }

        else if (s == "size")
        {
            cout << q.size() << '\n';
        }

        else if (s == "empty")
        {
            if (q.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }

        else if (s == "front")
        {
            if (q.empty()) cout << -1 << '\n';
            else cout << q.front() << '\n';
        }

        else if (s == "back")
        {
            if (q.empty()) cout << -1 << '\n';
            else cout << q.back() << '\n';
        }
    }
}
