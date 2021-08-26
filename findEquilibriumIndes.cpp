#include <iostream>
using namespace std;

int main()
{
  int s;
  cout<<"enter size";
  cin>>s;
  int arr[s];
  for(int i = 0; i<s; i++)
  {
      cin>>arr[i];
  }
 int sum1 =0, sum2 =0;
  for(int j=0; j<s; j++)
  {
      sum1 += arr[j];
      for(int k=j+1; k<s; k++)
      {
        sum2 += arr[k];
      }
      if(sum1 == sum2)
        cout<<"equi at index :"<<j;
  }

  return 0;
  

}