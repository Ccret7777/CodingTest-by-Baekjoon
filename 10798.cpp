using namespace std;
#include <iostream>
#include <string>

int main()
{
    string sentence[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> sentence[i];
    }

    for (int j = 0; j < 15; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            if (j < sentence[i].length())
            {
                cout << sentence[i][j];
            }
        }
    }

    return 0;
}
