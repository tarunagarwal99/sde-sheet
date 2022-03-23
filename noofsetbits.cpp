#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
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
        cout<<count;
    return 0;
}