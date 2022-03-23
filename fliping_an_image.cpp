#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
    vector<vector<int>> v={{1,1,0},{1,0,1},{0,1,1}};
    for(int i=0;i<v.size();i++){
        reverse(v[i].begin(),v[i].end());
        

    }
   for(int i=0;i<v.size();i++){{
       for(int j=0;j<v[i].size();j++){
        //    cout<<v[i][j];
        if(v[i][j]==1){
            v[i][j]=0;
            cout<<v[i][j];
        }
        else{
             v[i][j]=1;
            cout<<v[i][j];
        }

       }
   }
      

   }
  
    
}