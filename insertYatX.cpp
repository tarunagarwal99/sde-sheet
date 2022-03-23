#include<iostream>
using namespace std;

int main(){
    int n, x, y;
    cin >> n;
    int a[n+1];
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    cin >> x >> y;
    n++;
    for (int i = n; i >= x; --i){   
        a[i] = a[i-1];
    }
    a[x] = y;
    for (int i = 1; i <= n; ++i){
        cout << a[i] << " ";
    }
}