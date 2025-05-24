#include <bits/stdc++.h> 
using namespace std;

int main(){

    int a = 0;
    cin>>a;
    for (int i = 1;i<a+1;i++)
    {
        if (i%2 == 0)
        {
            for (int c = a;c>0;c--)
            {
                cout<<c+(a * (i - 1))<<" ";
            }
        }
        else 
        {
            for (int c = 1;c<a+1;c++)
            {
                cout<<c + (a * (i-1))<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}