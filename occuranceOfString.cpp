#include<iostream>
using namespace std;

int main() {
    string str1,str2;
    cin>>str1>>str2;
    int n=str1.length();
    int m=str2.length();
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(str1.substr(i,m)==str2){
            count++;
        }
    }
    
    cout<<count;
    // return 0;
}