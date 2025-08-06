using namespace std;
#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    string A;
    string B;

    cin >> A >> B;

    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    // 문자열을 숫자로
    int numA = stoi(A);
    int numB = stoi(B);

    cout << max(numA, numB) << '\n';
    
    return 0;
}
