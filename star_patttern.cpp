#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
       //spaces   n-i
       int cnt=1;
       while(cnt<=n-i){
           cout<<" ";
           cnt++;

       }
       //star 2*i-1
       int cnt1=1;
       while(cnt1<=2*i-1){
           cout<<"*";
           cnt1++;
       }
       i=i+1;
    //    cout<<endl;
    }
  
    return 0;

}