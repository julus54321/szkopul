#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> tak;
    
    int n,a,c=-1;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == 1) {
            tak.push_back(1);
            c++;
        } else {
            tak[c]++;
        }
    }

    cout << tak.size() << '\n';

    for (int x : tak) {
        cout << x << " ";
    }

    return 0;
}