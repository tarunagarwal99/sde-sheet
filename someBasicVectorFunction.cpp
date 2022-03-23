#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    for(int i=1;i<=5;i++){
        v.push_back(i);
    }

    
    for (auto i = v.begin(); i !=v.end(); i++)
    {
        cout<<*i;
    }
    cout<<endl;
    reverse(v.begin(),v.end());   //reversing any array
        //print all element with help of for each loop

    for (int x : v)
    {
        cout<<x;
    }
    cout<<endl;

    
    
    

    return 0;
}