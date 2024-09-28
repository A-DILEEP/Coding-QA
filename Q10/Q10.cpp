#include <bits/stdc++.h>
using namespace std;
char extraChar(string input1, string input2)
{
    unordered_map<char, int> mycounter;
    for (char c : input1)
    {
        mycounter[c]++;
    }
    for (char c : input2)
    {
        mycounter[c]--;
    }
    for (auto pair : mycounter)
    {
        if (pair.second != 0)
        {
            return pair.first;
        }
    }
    return '\0';
}
int main()
{
    string input1, input2;
    cout << "Enter the first string :";
    cin >> input1;
    cout << "Enter the second string : ";
    cin >> input2;
    char output = extraChar(input1, input2);
    if (output != '\0')
    {
        cout << "The extra character comparing both the strings :" << output;
    }
    else
    {
        cout << "There is no extra character !";
    }
}