#include <bits/stdc++.h> 
using namespace std;

char pier(int n) {
    for (int i = 2;i * i<=n;i++) {
        if (n%i == 0) {return 'Z';}
    }
    return 'P';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    cout<<pier(n);

    return 0;
}