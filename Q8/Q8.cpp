#include<bits/stdc++.h>
using namespace std;

string arrangedString(string f,string s,string t){
    for(int i=0;i<f.length();i++){
        if (f[i] == 'a' || f[i] == 'e' || f[i] == 'i' || f[i] == 'o' || f[i] == 'u' ){
            f[i]='%';
        }
    }
    for(int i=0;i<s.length();i++){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            continue;
        }
        else{
            s[i]='#';
        }
    }
    transform(t.begin(),t.end(),t.begin(),::toupper);
    return f+s+t;
}
int main(){
    string first ,second,third;

    cin>>first>>second>>third;

    string NewString=arrangedString(first,second,third);

    cout<<NewString;
}