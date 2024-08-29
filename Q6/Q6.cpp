#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string s)
{
    stack<char> st;
    for (char c : s)
    {
        switch (c)
        {
        case '{':
            st.push(c);
            break;
        case '[':
            st.push(c);
            break;
        case '(':
            st.push(c);
            break;
        case '}':
            if (st.empty() || st.top() != '{')
            {
                return false;
            }
            st.pop();
            break;
        case ')':
            if (st.empty() || st.top() != '(')
            {
                return false;
            }
            st.pop();
            break;
        case ']':
            if (st.empty() || st.top() != '[')
            {
                return false;
            }
            st.pop();
            break;
        }
    }
    return st.empty();
}
int main()
{
    string s;
    cout << "Enter the string :";
    cin >> s;

    if (isBalanced(s))
    {
        cout << "Yes its a balanced string";
    }
    else
    {
        cout << "No its not a balanced string";
    }
}