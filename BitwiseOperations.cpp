#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
// Check whether k'th bit is set or not.
    if((n & (1 << (k-1))) != 0 )
        cout<<"Yes";

    else
        cout<<"No";

    return 0;
}