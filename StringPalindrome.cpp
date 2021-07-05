#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"enter string to check palindrome or not : ";
    cin>>str;

    int start = 0;
    int endd = str.length() - 1;

    while(start<=endd)
    {
        if(str[start] != str[endd])
        {
            cout<<"No";
            return 0;
        }
        else
        {
            start++;
            endd++;
        }

    }
    cout<<"Yes";
    return 0;
}
