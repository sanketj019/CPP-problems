#include <bits/stdc++.h>
using namespace std;

int main()
{
string s1;
cin>>s1;
int flag =0;
for(int i=0; s1[i] != 0; i++)
{
    if(s1[i]==-1)
        continue;
    for(int j = i+1; s1[j] != 0; j++)
    {
        if(s1[i] == s1[j])
            {flag =1;
            s1[j] = -1;
            }
    }
    if(flag == 0)
        cout<<s1[i]<<" ";
    flag = 0;
}
}
