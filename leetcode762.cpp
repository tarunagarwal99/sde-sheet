#include<iostream>
using namespace std;

int setBits(int n){
        int sum=0;
        int count=0;
        int p=1;
        while(n>0){
            int rem=n%2;
            if(rem==1){
                count++;
            }
            sum=sum+rem*p;
            // p=p*10;
            n=n/2;
        }
        return count;
    }

    int primeOrNot(int num){
        int n=setBits(num);
        bool flag=0;
        if(n==0||n==1){
            flag=1;
        }
        for(int i=2;i<=(n/2);i++){
            if(n%i==0){
                flag=1;
            }
        }
        if(flag==0){
            return 1;
        }
        else{
            return 0;
        }
    }

int main() {
    int left,right;
    cin>>left>>right;
    int ans=0;
    for(int i=left;i<=right;i++){
         ans+=primeOrNot(i);    
        }
        cout<<ans;
        
    
    return 0;
}