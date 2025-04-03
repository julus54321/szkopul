#include <bits/stdc++.h> 
using namespace std;

int main(){

    int a,y;
    cin>>a;

    vector<int> vec;

    for (int i = 0;i<a;i++)
    {
        int b,c,x = 0;
        cin>>b>>c;
        for(int s = 0; ;s++)
        {
            x += b*2;
            if(x >= c){vec.push_back(x);break;}
        }
        
    }

    for(y=0;y<vec.size();y++)
    {
        cout<<vec[y]<<endl;
    }

    return 0;
}