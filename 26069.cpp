using namespace std;
#include <iostream>
#include <unordered_set>
#include <string>

int main()
{
    int N;
    cin >> N;

    unordered_set<string> s;
    s.insert("ChongChong");

    for (int i = 0; i < N; i++)
    {
        string name1;
        string name2;
        cin >> name1 >> name2;

        if (s.count(name1) || s.count(name2))   // name1이나 name2가 포함돼있다면
        {
            s.insert(name1);
            s.insert(name2);
        }
    }

    cout << s.size() << '\n';

    return 0;
}
