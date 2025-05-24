#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x;
    cin >> x;

    for (int i = 0;i<x;i++) {
        if (i == 0 | i == x - 1) {
            cout << string(x, 'K') << '\n';
        } else {
            cout << 'K' << string(x - 2, ' ') << 'K' << '\n';
        }
    }

    return 0;
}