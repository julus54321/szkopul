#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b=0,c;

    cin >> a;

    for (int i = 0; i<a;i++) {
        cin >> c;
        b = max(b , c);
    }

    cout << b;

    return 0;
}