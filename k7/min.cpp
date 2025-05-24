#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int licz,mn=INT_MAX;

    while (cin >> licz) {
        mn = min(mn, licz);
    }

    cout << mn;

    return 0;
}