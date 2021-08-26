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
  int count=1;
  for(int j = 0; j<s; j++)
  {
      for(int k =j+1; k<s; k++)
      {
          if(arr[j] == arr[k])
          {
             count++; 
          }
          cout<<arr[j]<<" "<<count<<endl;
          count = 1;
      }
  }
  

}