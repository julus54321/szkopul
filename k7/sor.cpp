#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x;

    vector<int> licz;

    while (cin >> x) {
        licz.push_back(x);
    }

    int i = 1,j;

    while (i < licz.size()) {
        j = i;
        while (j > 0 && licz[j - 1] > licz[j]) {
            swap(licz[j],licz[j - 1]);
            j--;
        }
        i++;
    }

    for (int x : licz) {
        cout << x << " ";
    }

    return 0;
}