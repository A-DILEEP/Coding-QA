#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    reverse(s.begin(), s.end());
    int count = 0;
    for (char ch : s)
    {
        if (ch != ' ')
        {
            cout << ch;
            count++;
        }
        else
        {
            break;
        }
    }
    reverse(s.begin(), s.end());
    int newone = s.length() - count;
    cout << " ";
    for (int i = 0; i < newone; i++)
    {
        cout << s[i];
    }
}