#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    cin>>s1;
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    cout<<s1<<endl;

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    cout<<s1<<endl;


string s2;
cin>>s2;

sort(s2.begin(), s2.end(), greater<int>());
cout<<s2<<endl;
    return 0;
}
