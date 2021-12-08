#include <iostream>
using namespace std;

int main()
{
    string s1;
    cin>>s1;
    int len = s1.length();
    int front =0;
    int rear = len-1;
    int flag;
    while(front<rear)
    {
        if(s1[front] != s1[rear])
           flag =1;

        front++;
        rear--;
    }
    if(flag != 1)
    {
        cout<<"Palindrome";
    }
    else cout<<"not";
}