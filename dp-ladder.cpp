
//ladder problem 
//we can only take steps of  1 or 2 to climb the ladder
//we have to find out how many method we have to climb the ladder in this particular scenerio 

// this code is showing TLE error in code because one computation is computed many times
//to overcome with this problem we are usimg dynamic programming approach in which previously compuated value are stored in the array which we use further




#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int  dp[46];

int help(int s,int n){
    //here s is the number of step we have taken
    if(s==n) return 1;   //base case  
    if(s>n) return 0;
    if(dp[s]!=-1) return dp[s];
    int ans = help(s+1,n)+help(s+2,n);
    dp[s]=ans;
    return dp[s];
}55

int main() {

    int n;
    cin>>n;
    int dp[46];
    for (int i = 0; i < 46; i++)
    {
        dp[i]=-1;
    }
    
    cout<<help(0,n);



    
    return 0;
}