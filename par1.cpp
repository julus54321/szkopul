#include <bits/stdc++.h> 
using namespace std;

int main(){

    int c = 0;
    int cc = 0;
    vector<int> vec;

    while (cin >> c) {
        vec.push_back(c);
    }

    for (int i = 0;i<vec.size();i++)
    {
        if (vec[i]%2 == 0) (cc++);
    }

    cout<<cc;

    return 0;
}