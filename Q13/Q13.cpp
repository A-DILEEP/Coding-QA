#include<bits/stdc++.h>
using namespace std;
int main(){
    int range;
    cin>>range;
    int t1=0,t2=1 , t3=1;
    cout<<t1<<" "<<t2<<" "<<t3<<" ";
    for(int i=4;i<=range;i++){
        int sum=t1+t2+t3;
        cout<<sum<<" ";
        t1=t2;
        t2=t3;
        t3=sum;
    }
}