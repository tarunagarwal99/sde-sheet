#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int count=0;
        int count1=0;
        for (int  i = 0; i < n; i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                count++;
            }
            else{
                count1++;
            }
        }
        cout<<count<<" "<<count1;
        
    }
    
}