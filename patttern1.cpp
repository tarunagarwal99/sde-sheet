#include <stdio.h>  
#include<iostream>
using namespace std;

  
int main(void) {  
    
  int n;  

  cin>>n; 

 for(int i=0;i<n;i++)  
 {  
   for(int j=0;j<i;j++)  
   {  
   
       cout<<" "; 
   }  
   for(int k=1;k<=n-i;k++)  
   {  
 
     cout<<"*";
   }  
 
   cout<<"\n";
 }  
for(int i=1;i<n;i++)  
{  
  for(int j=1;j<n-i;j++)  
  {  
  
    cout<<" "; 
  }  
  for(int k=1;k<=i+1;k++)  
  {  
    
    cout<<"*";  
  }  

  cout<<"\n";  
}  
  return 0;  
}  