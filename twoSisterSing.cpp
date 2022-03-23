#include<iostream>
using namespace std;

int main() {
        int A1,A2,B1,B2;
    cin>>A1>>A2>>B1>>B2;
   int total=min(A2,B2)-max(A1,B1);
   if(total>0){
       cout<<total;
   }
   else{
       cout<<"0";
   }
}