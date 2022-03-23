 #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
 
 int main() {
     int n;
     cin>>n;
     vector<int> a(n);
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     sort(a.begin(),a.end());
     for(int i=0;i<n;i++){
         cout<<a[i]<<" ";
     }
     cout<<endl;
     auto lower=lower_bound(a.begin(),a.end(),4);
     auto upper=upper_bound(a.begin(),a.end(),4);
     cout<<(*lower)<<" "<<(*upper);
     
     return 0;
 }