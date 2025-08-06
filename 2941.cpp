using namespace std;
#include <iostream>
#include <string>

int main()
{
    string word;
    cin >> word;

    string croatia[] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

    for (string c : croatia)
    {
        size_t pos = word.find(c);   // size_t: 양수만 표현 unsigned int
        while (pos != string::npos)
        {
            word.replace(pos, c.length(), "#");
            pos = word.find(c);
        }
    }

    cout << word.length() << '\n';

    return 0;
}
