#include<bits/stdc++.h>
using namespace std;
bool checkPanagram(string line){
    vector<bool> check(26,false);
    int index;
    for(int i=0;i<line.length();i++){
        if('A'<=line[i] && line[i]<='Z'){
            index=line[i]-'A';
        }
        else if('a'<=line[i] && line[i]<='z'){
            index=line[i]-'a';
        }
        check[index]=true;
    }
    for(int i=0;i<=25;i++){
        if(check[i]==false){
            return false;
        }
    }
    return true;
}
int main(){
    string line;
    getline(cin,line);
    if(checkPanagram(line)){
        cout<<"Yes its a panagram !";
    }
    else{
        cout<<"No its not a panagram ";
    }
}