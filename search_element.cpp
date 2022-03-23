#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
   
    int n;
    int arr[n];
   
     int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
         int a;
         cin>>a;
      for(int i=0;i<n;i++){
          if(arr[i]==a){
              cout<<1;
          }
          else{
              cout<<0;
          }
      }

    }
  
}