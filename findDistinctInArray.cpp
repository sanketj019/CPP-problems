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
  for(int i =0; i<s; i++)
  {

      for(int j=i+1; j<s; j++)
      {
          if(arr[i] == arr[j])
            flag = 1;
      }
      if(flag == 0)
        count++;
    
  }

  cout<<count;

}