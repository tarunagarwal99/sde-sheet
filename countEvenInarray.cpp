#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int a;
    cin>>a;
    int n;
    cin>>n;
   int b[n];   //declaring an array
   int count=0;
   for(int i=0;i<n;i++){
       cin>>b[i];
       if((b[i]%a)%2==0){
           count++;
       }
   }
        
        
    
     cout<<count;

    
  
}