#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    int ans;
    for(int i=0;i<n;i++){
        if(A[i]%2==0){
         maxNo=max(maxNo,A[i]);
        }
        if(A[i]%2==1){
            minNo=min(minNo,A[i]);
        }
    }
    cout<<maxNo<<endl;
    cout<<minNo<<endl;
    ans=maxNo-minNo;
    cout<<ans;
 
}