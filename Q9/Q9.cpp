#include<bits/stdc++.h>
using namespace std;

string modifiedString (const string &s,char l){
    unordered_map<char,int> Count;

    for(char ch:s){
        Count[ch]+=1;
    }

    char mostFreqCharacter='\0';
    int maxCount=0;

    for(const auto &pair:Count){
        if(pair.second>maxCount){
            maxCount=pair.second;
            mostFreqCharacter=pair.first;
        }
    }
    string result=s;
    for(char &ch:result){
        if(ch==mostFreqCharacter){
            ch=l;
        }
    }
    return result;
}
int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;

    char l;
    cout<<"Enter the replacing letter : ";
    cin>>l;
    string output=modifiedString(s,l);
    cout<<output;
}