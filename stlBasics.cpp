#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int n;
    cin>>n;
    vector<int> v(n);
    for(int x:v){
        cin>>x;
        v.push_back(x);
        
    }
     for(int i=0;i<n;i++){
         cout<<v[i];
     }
    
    
    // int t;
    // cin>>t;
    // v.erase(v.begin()+t);
    // sort(v.begin(),v.end());
    // for(int y:v){
    //     cout<<y<<endl;
    // }
    
  
}