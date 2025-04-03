#include <bits/stdc++.h> 
using namespace std;

int main(){

    int pol,lbulw;
    cin>>pol;

    vector<int> vec(pol);

    for (int x = 0; x < pol;x++)
    {
        cin >> vec[x];
    }

    cin>>lbulw;

    sort(vec.rbegin(), vec.rend());

    int y = 0;

    for (int i = 0;i < pol && lbulw > 0;i++)
    {   
        int bdz = min(vec[i] , lbulw);
            
        y += bdz * bdz;
        lbulw -= bdz;
        
    }

    cout << y <<endl;
    
    return 0;
}