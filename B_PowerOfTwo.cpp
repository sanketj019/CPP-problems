#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

//using Brian Kerningam's algorithm

    if((n & (n-1)) == 0)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}