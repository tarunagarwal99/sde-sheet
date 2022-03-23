#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> A{3,4,4,6};
    vector<int> B{20,4,10,2};
    for (int i = 1; i < A.size(); i++) {
        A[i] += A[i - 1];
    }
    for (int & X: B) {
        X = upper_bound(A.begin(), A.end(), X) - A.begin();
        cout<<X<<" ";
    }
    // cout<<B;
    return 0;
}