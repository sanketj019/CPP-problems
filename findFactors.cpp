#include <iostream>
using namespace std;
int arr[100];
void findFactor(int n){
    if(n == 0) return;
    int res = 0;
for(int i=2; i<n/2; i++)
    {
        if(n%i == 0)
         {arr[res] = i;
         res++;
         findFactor(n/i);
         }

    }
    
    for(int i=0; i<100; i++)
        cout<<arr[i];}

int main()
{
    int n;
    cin>>n;
 findFactor(n);
    return 0;
}