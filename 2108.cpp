using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using int64 = long long;

int main()
{
    int64 N;
    cin >> N;
    vector<int> v(N);

    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    // 1. 산술평균 출력
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
        sum += v[i];
    double ave = (double)sum / v.size();
    cout << (int)round(ave) << '\n';   // 소수 첫째자리 반올림

    // 2. 중앙값
    sort(v.begin(), v.end());
    cout << v[v.size() / 2] << '\n';

    // 3. 최빈값
    vector<int> v2(8001);
    for (int i = 0; i < v.size(); i++)
    {
        v2[v[i] + 4000]++;
    }
    int max = *max_element(v2.begin(), v2.end());  // 가장 큰 값의 위치를 반환하기에 값을 얻으려면 *를 붙여야함
    vector<int> modes;
    for (int i = 0; i < 8001; i++)
    {
        if (v2[i] == max)
            modes.push_back(i - 4000);
    }

    int mode = (modes.size() > 1) ? modes[1] : modes[0];
    cout << mode << '\n';

    // 4. 범위
    cout << v[v.size() - 1] - v[0] << '\n';

    return 0;
}
