#include <bits/stdc++.h> 
using namespace std;

int pier(int n) {
    for (int i = 2;i * i<=n;i++) {
        if (n%i == 0) {return -1;}
    }
    return n;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 2;i<n + 1;i++) {
        if (pier(i) != -1) {
            cout << pier(i) << " ";
        }
    }

    return 0;
}