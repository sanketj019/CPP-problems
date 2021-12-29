#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,res;
    cin>>a>>b;
    res = min(a,b);

    while(res > 0)
    {
        if(a % res == 0 && b % res == 0)
        break;
        else
        res--;
    }
    cout<<res;
    return 0;
}

// Using Euclidean algorithm

 int gcd(int a, int b)
{
	while(a!=b)
	{
		if(a > b)
			a = a - b;
		else
			b = b - a; 
	}

	return a;
}
