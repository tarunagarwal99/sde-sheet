#include<iostream>
using namespace std;

int main() {
    
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int t;
    cin>>t;
    int n;
    while(t--){
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       for(int i=0;i<n;i++){
           if(arr[i]%2==1){
               cout<<arr[i]<<" ";
           }
       }
       cout<<endl;
        for(int i=0;i<n;i++){
           if(arr[i]%2==0){
               cout<<arr[i]<<" ";
           }
       }
    }
   
    
    
    return 0;
}
