#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x=0;

    vector<int> vec;

    while (cin >> x) {
        vec.push_back(x);
    }

    reverse(vec.begin(), vec.end());

    for (int v : vec)
    {
        cout<<v<<" ";
    }

    return 0;
}