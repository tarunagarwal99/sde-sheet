#include<iostream>
using namespace std;

bool isprime(int n){
    int c=0;
    for(int i=0;i*i<=n;i++){
        if(n%i==0){
            if(i*i<=n){
                c++;
            }
            else{
                c+=2;
            }
        }
    }

    if(c==2){
         return true;
    }
    else{
        return false;
    }
}
int main() {
    int n;
    cin>>n;
    cout<<isprime(n);
    
    return 0;
}