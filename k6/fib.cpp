typedef unsigned long long ll;

#include <bits/stdc++.h> 
using namespace std;

ll fib(int n) {
    ll a = 0,b = 1;
    for (ll i = 2;i<n+1;i++) {
        ll t = b;
        b += a;
        a = t;
    }
    return b;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    cout<<fib(n);

    return 0;
}