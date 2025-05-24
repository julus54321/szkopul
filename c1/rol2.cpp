#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a;
    cin>>a;

    for (int i = 0;i<a;i++)
    {
        int c,s=1;
        cin>>c;

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
        cout<<"\n";
    }

    return 0;
}