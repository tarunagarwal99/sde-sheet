#include<iostream>
using namespace std;
#include<bits/stdc++.h>

string main() {
  vector<string> words={"tarun","abs","aba","abacdmas"};
   int n=words.size();
  cout<<n;
  
        for(int i=0;i<n;i++){
            for(int j=0;j<(words[i].size()/2);j++){
                if(words[i][j]!=words[i][n-j-1]){
                    return words[i];
                }
            }
            
        }

 
}