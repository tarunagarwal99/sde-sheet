#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
     bool flag=0;
     if(n==0||n==1){
         flag=1;
     }
     for(int i=2;i<=n/2;i++){
         if(n%i==0){
             flag=1;
             break;
         }
     }
     if(flag==0){
         cout<<"prime";
     }
     else{
         cout<<"not prime";
     }
    return 0;
}