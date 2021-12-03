#include <iostream>
using namespace std;

int main()
{
    string s1;
    getline(cin, s1);
    int count = 1;
 int len = s1.length();
 for(int i=0; i<len; i++)
 {
    if(s1[i] == -1)
        continue;
    for(int j=i+1; j<len; j++)
    {
        if(s1[i] == s1[j])
            {count++;
            s1[j] = -1;}
    }

    cout<<s1[i]<<" "<<count<<endl;

    count = 1;

 }

 return 0;
}
