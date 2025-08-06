#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int alphabet[26];
    for (int i = 0; i < 26; i++) 
    {
        alphabet[i] = -1; 
    }

    for (int i = 0; i < s.length(); i++) 
    {
        int idx = s[i] - 'a';  
        if (alphabet[idx] == -1) 
        {
            alphabet[idx] = i;  
        }
    }

    for (int i = 0; i < 26; i++) 
    {
        cout << alphabet[i] << ' ';
    }

    cout << '\n';
    return 0;
}
