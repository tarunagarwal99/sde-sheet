#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    pair<int,pair<int,int>> p1={1,{2,3}};  //pair of pair
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second;
    cout<<endl;
    pair<int,int> arr[]={{1,2},{3,4},{5,6}};//pair of an array
    cout<<arr[1].second;
    cout<<endl;
    vector<int> v;
    v.push_back(1);
    v.emplace_back(3);
    vector<pair<int,int>> v1;
    v1.push_back({1,2});
    cout<<v1.size();
    //declartion of vector
    vector<int> v2(5);  //here the vectior would be {0,0,0,0,0};
    vector<int> v3(5,20); // vector  :{20,20,20,20,20};
    vector<int> v4(v3);   //here the values of vector v3 is copied to 
    
    return 0;
}