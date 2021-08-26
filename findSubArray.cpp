#include <iostream>
using namespace std;

bool findSubArray(int arr1[], int arr2[], int x, int y)
{ int flag =0;
    for(int i= 0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            if(arr2[i]==arr1[j])
                flag =1;
        }
        if(flag == 0)
            return false;
    }
    return true;
}

int main()
{
    int x, y;
    
    cin>>x>>y;
    int arr1[x], arr2[y];
    for(int i=0; i<x; i++)
        cin>>arr1[i];

    for(int j=0; j<y; j++)
        cin>>arr2[j];

    bool r = findSubArray(arr1, arr2, x, y);
    cout<<r;
    return 0;
}