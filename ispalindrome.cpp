#include<iostream>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int t;
    cin>>t;
      
   while(t--){
        string s;
        cin>>s;
      int flag=1;
        for(int j=0;j<s.size();j++){
            if(s[i]!=s[s.size()-1-i]){
                flag=0;
            }
              
        }
        cout<<flag<<endl;
      
       
    } 
    return 0;
}