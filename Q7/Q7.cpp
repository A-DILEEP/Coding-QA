#include<bits/stdc++.h>
using namespace std;

void reverse(string& str){
    istringstream ss(str);
    vector<string> strings;
    string word;
    while(ss>>word){
        strings.push_back(word);
    }
    reverse(strings.begin(),strings.end());
    str="";
    for(string &s:strings){
        str+=(s + " ");
    }

}

int main(){
    string str;
    getline(cin,str);
    reverse(str);
    cout<<str;
}