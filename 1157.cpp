using namespace std;
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main()
{
    string word;
    cin >> word;
    int alpha[26] = { 0 };

    for (int i = 0; i < word.length(); i++)
    {
        char ch = tolower(static_cast<unsigned char>(word[i])); // 대소문자 구분 안 하려면

        if ('a' <= ch && ch <= 'z') 
        {
            int idx = ch - 'a';
            alpha[idx]++;
        }
    }

    vector<pair<int, char>> alphas;

    for (int i = 0; i < 26; i++)
    {
        alphas.push_back({ alpha[i], char('A' + i) });
    }

    sort(alphas.begin(), alphas.end());   // 먼저 first값 기준으로 비교, 같다면 second값 기준으로 비교

    int max = alphas[25].first;
    if (max == alphas[24].first)
        cout << "?" << '\n';
    else
        cout << alphas[25].second << '\n';

    return 0;
}
