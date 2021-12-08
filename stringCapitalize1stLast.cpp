#include <iostream>
using namespace std;

int main()
{
    string s1;
    getline(cin, s1);
 int len = s1.length();
 for(int i=0; i<len; i++)
 {
     if(i==0 || i == len-1)
        s1[i]-=32;
     else if(s1[i] == ' ')
      {
    s1[i-1]-=32;
     s1[i+1]-=32;}
 }
    cout<<s1;
    }
