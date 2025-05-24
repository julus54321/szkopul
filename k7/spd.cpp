#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    unsigned long long n,s=1;
    cin >> n;

    for(int i = n ;i>1;i-=2) {
        s*=i;
    }
    
    cout << s;

    return 0;
}