#include <iostream>
using namespace std;

int main()
{
    int low, high;
    cout<<"Enter limits : ";
    cin>>low>>high;
    int flag = 0;
    for(int i = low; i<=high; i++)
    {
        for(int j = 2; j<=i/2; j++)
        {
            if(i%j == 0)
            flag = 1;
        }
        if(flag == 0 && i != 1)
            cout<<i<<" ";
        flag = 0;
    }
    return 0;
}