#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,v;
    cin>>a;
    map<int,int> map;

    for (int i=0;i<a;i++)
    {
        cin>>v;
        map[v] += 1;
    }
    int r = 15000 - map.size();
    cout<<r;

    return 0;
}