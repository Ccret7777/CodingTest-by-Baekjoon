using namespace std;
#include <iostream>
#include <stack>
#include <string>

bool IsBalanced(const string& str)
{
    stack<char> s;

    for (char c : str)
    {
        if (c == '[' || c == '(')
            s.push(c);

        else if (c == ']')
        {
            if (s.empty() || s.top() != '[') return false;  
            s.pop();
        }

        else if (c == ')')
        {
            if (s.empty() || s.top() != '(') return false; 
            s.pop();
        }
    }

    return s.empty();
}

int main()
{
    string line;

    while (true)
    {
        getline(cin, line);

        if (line == ".") break;

        if (IsBalanced(line))
        {
            cout << "yes" << '\n';
        }

        else cout << "no" << '\n';
    }
}
