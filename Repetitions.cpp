#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
  int max=0;
  string s;
  cin>>s;
  int temp=0;
  for(int i=0;i<s.length()-1;i++)
  {
      
      if(s[i]==s[i+1])
      {
          temp++;
          if(temp>max)
          max=temp;
      }
      else
      {
          temp=0;
      }
  }
 
 cout<<max+1;

    return 0;
}