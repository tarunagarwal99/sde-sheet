#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  
    vector<int> A={5,6,2};
    vector<int> ans(3);
    sort(A.begin(),A.end(),greater<int>());
    for(int i=0;i<3;i++){
        cout<<A[i]<<" ";
    }
     int count=0;
           ans[0]=0;
           int i=1;
    while(i<3){
   
    
        if(A[i]==A[i-1]){
           ans[i]=count;
       }
        else if(A[i]!=A[i-1]){
            count=i;
            ans[i]=count;
        }
        i++;
    }
    cout<<endl;
     for(int i=0;i<3;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}