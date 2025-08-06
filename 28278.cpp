using namespace std;
#include <iostream>
#include <stack>

using int64 = long long;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int64 N;
    cin >> N;

    stack<int64> s;

    while (N--)
    {
        int num;
        cin >> num;

        switch (num)
        {
        case 1:
            int64 X;
            cin >> X;
            s.push(X);
            break;
        case 2:
            if (s.empty()) cout << -1 << '\n';
            else 
            {
                cout << s.top() << '\n';
                s.pop();
            }
            break;
        case 3:
            cout << s.size() << '\n';
            break;
        case 4:
            if (s.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
            break;
        case 5:
            if (s.empty()) cout << -1 << '\n';
            else  cout << s.top() << '\n';                 
            break;
        }
    }
}
