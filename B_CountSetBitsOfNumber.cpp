#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin>>n;

    while(n > 0)
    {
        if((n & 1) == 1)
            {
                count++;
            }

        n = n >> 1;
    }

    cout<<count;

    return 0;
}

//Efficient way using Brian Kerningam's algorithm.

while(n > 0)
{
    n = n & (n -1);
    count++;
}

cout<<count;

// See SS for reff.