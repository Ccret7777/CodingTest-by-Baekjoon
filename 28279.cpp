using namespace std;
#include <iostream>
#include <deque>

using int64 = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64 N;
    cin >> N;

    deque<int64> dq;

    while (N--)
    {
        int num;
        cin >> num;

        switch (num)
        {
            int64 X;
        case 1:
            cin >> X;
            dq.push_front(X);
            break;

        case 2:
            cin >> X;
            dq.push_back(X);
            break;

        case 3:
            if (dq.empty()) cout << -1 << '\n';
            else
            {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
            break;

        case 4:
            if (dq.empty()) cout << -1 << '\n';
            else
            {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
            break;

        case 5:
            cout << dq.size() << '\n';
            break;

        case 6:
            if (dq.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
            break;

        case 7:
            if (dq.empty()) cout << -1 << '\n';
            else
                cout << dq.front() << '\n';        
            break;

        case 8:
            if (dq.empty()) cout << -1 << '\n';
            else
                cout << dq.back() << '\n';
            break;
        }
    }
}
