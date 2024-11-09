#include<bits/stdc++.h>
using namespace std;
int main(){
    int range;
    cin>>range;
    int t1=0,t2=1;
    cout<<t1<<" "<<t2<<" ";
    for(int i=3;i<=range;i++){
        int sum=t1+t2;
        cout<<sum<<" ";
        t1=t2;
        t2=sum;
    }
}