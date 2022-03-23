#include<iostream>
using namespace std;

int main() {
    string a;
    cin>>a;
    int n=a.size();
    string b=a;
    for (int i = 0; i < n/2; i++)
    {
        swap(a[i],a[n-1-i]);
    }
    
        cout<<a<<endl;
        int count=0;
        for (int  i = 0; i < n; i++)
        {
            if(a[i]!=b[i]){
             count++;
            }
        }
        cout<<count;
        
    

    return 0;
}