using namespace std;
#include <iostream>
#include <string>
#include <vector>

bool IsVisited(const string& word)
{
    vector<bool> isVisited(26, false);

    char prev = 0;

    for (char c : word)
    {
        if (c != prev)
        {
            if (isVisited[c - 'a'])
                return false;
        }

        isVisited[c - 'a'] = true;
        prev = c;
    }

    return true;
}

int main()
{
    int N;
    cin >> N;

    string word;
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> word;

        if (IsVisited(word)) count++;
    }

    cout << count << '\n';

    return 0;
}
