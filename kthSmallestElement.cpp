#include<iostream>
using namespace std;

int kthSmallest(int arr[],int k,int n){
    //sort the array
    sort(arr,arr+n);
    // return the kth element the sorted array
    return arr[k-1];
}

int main() {
   
    int arr[n];
     int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int k;
    cin>>k;
    cout<<kthSmallest(arr,k,n);
    return 0;
}