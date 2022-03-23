#include<iostream>
using namespace std;

int main() {
    
    int A[]={1,3,2,5,5,6,7};
    
    int res=0;
    
    for(int i=0;i<7;i++){
        res=res^A[i];  //this will give us xor of missing and repeating number 
    }
      for(int i=0;i<7;i++){
        res=res^(i+1);  //this will give us xor of missing and repeating number 
    }

     int setBit=res & ~(res-1);
     int l=0,r=0;
     for(int i=0;i<7;i++){
         if(A[i] & setBit){
             l=l^A[i];
         }
         else{
             r=r^A[i];
         }
     }
        for(int i=0;i<7;i++){
         if((i+1) & setBit){
             l=l^(i+1);
         }
         else{
             r=r^(i+1);
         }
     }
bool isMissing=true;
for(int i=0;i<7;i++){
    if(A[i]==l){
        isMissing=false;
        break;
    }
}


if(isMissing==true){
        cout<<"missingNumber= "<<l<<" repeatingNumber="<<r;
    }
else{
       cout<<"missingNumber= "<<r<<"  repeatingNumber="<<l;  
    }

   
    
}
