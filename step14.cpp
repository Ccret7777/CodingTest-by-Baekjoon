using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

using int64 = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64 N;
    cin >> N;

    vector<int64> v1;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        
        v1.push_back(num);
    }

    sort(v1.begin(), v1.end()); // 정렬

    int64 M;
    cin >> M;

    vector<int64> v2;
    for (int i = 0; i < M; i++)
    {
        int num;
        cin >> num;

        if (binary_search(v1.begin(), v1.end(), num))
            cout << "1 ";
        else
            cout << "0 ";
    }

    cout << '\n';
}
