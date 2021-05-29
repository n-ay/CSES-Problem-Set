#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
  int n;
  cin>>n;
  int a[n];
  
  if(n<=3 && n>1)
  {
      cout<<"NO SOLUTION";
      return 0;
  }
  int j;
  int pi=n/2;
  if(n%2==0)
  {
    a[pi-1]=n;
    j=1;
    for(int i=pi;i<n;i++)
     {
         a[i]=j;
         j+=2;
     }
     j=n-2;
     for(int i=pi-2;i>=0;i--)
     {
         a[i]=j;
         j-=2;
     }
  }
  else
  {
      a[pi]=n;
      j=1;
    for(int i=pi+1;i<n;i++)
     {
         a[i]=j;
         j+=2;
     }
     j=n-1;
      for(int i=0;i<pi;i++)
     {
         a[i]=j;
         j-=2;
     }
  }

  for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
    return 0;
}