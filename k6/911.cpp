#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int w1,w2,s1=0,s2=0,c=0,x=0;
    cin >> w1 >> w2;

    vector<int> ww1(w1);
    vector<int> ww2(w2);

    for (int i = 0; i<w1;i++) { 
        cin >> x;
        ww1[i] = x;
        s1 += x;
    }

    for (int i = 0; i<w2;i++) { 
        cin >> x;
        ww2[i] = x;
        s2 += x;
    }

    while (s1 != s2) {
        if (s1 > s2) {
            s1 -= ww1[ww1.size() - 1];
            ww1.pop_back();
            c++;
        } else if (s2 > s1) {
            s2 -= ww2[ww2.size() - 1];
            ww2.pop_back();
            c++;
        }
    }

    cout << c << '\n';

    return 0;
}