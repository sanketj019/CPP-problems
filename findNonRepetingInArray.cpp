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
int count = 0;
int flag = 0;
int res = 0;
int temp[s];
  for(int i =0; i<s; i++)
  {

      for(int j=i+1; j<s; j++)
      {
          if(arr[i] == arr[j])
            flag = 1;
      }
      if(flag == 0)
      {
          temp[res] = arr[i];
      res++;}
        flag = 0;

  }
for(int k =0; k<res; k++)
  cout<<temp[k]<<" ";

}
