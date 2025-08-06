using namespace std;
#include <iostream>
#include <deque>
#include <vector>

int main()
{
    int N;
    cin >> N;

    deque<int> dq;
    vector<int> v(N);
    vector<int> result;

    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
        dq.push_back(i + 1);
    }

    while (!dq.empty())
    {
        int idx = dq.front();  
        dq.pop_front();
        result.push_back(idx);

        if (dq.empty()) break;

        int move = v[idx - 1];

        if (move > 0) 
        {
            for (int i = 0; i < move - 1; i++) 
            {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        else 
        {
            for (int i = 0; i < -move; i++) 
            {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }

    for (int i = 0; i < result.size(); i++) 
    {
        cout << result[i];
        if (i != result.size() - 1) cout << " ";
    }
    cout << '\n';
}
