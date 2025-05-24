#include <bits/stdc++.h> 
using namespace std;

int main(){

    int a;
    cin>>a;

    for (int i = 0;i<a;i++)
    {
        int b,c,x = 0;
        cin>>b>>c;
        int odb = 0;

        if (b == 0 || c == 0 || b >= c) {
            cout<<0<<endl;
        }else 
        {
            odb = ceil(log2((double)c/b));
            cout<<odb<<endl;
        }
    }
    return 0;
}