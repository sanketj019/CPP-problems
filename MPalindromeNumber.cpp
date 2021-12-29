#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, rev = 0;
    cin>>x;
    int y = x;
    int l;
    while( x != 0)
    {l = x % 10;
    x = x /10;
    rev = rev * 10 + l; 
    }

    if(y == rev)
    cout<<"Yes";
    else
    cout<<"No";

    return 0;
}