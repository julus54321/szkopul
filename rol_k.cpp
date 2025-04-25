#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int c,s;
    cin>>c>>s;

    vector<int> vec(c);

    for (int i = 0;i<c;i++)
    {
        cin>>vec[i];
    }

    for (int i = s;i < c; i++) 
    {
        cout<<vec[i]<<" ";
    }

    for (int i = 0;i<s;i++)
    {
        cout<<vec[i]<<" ";
    }

    return 0;
}