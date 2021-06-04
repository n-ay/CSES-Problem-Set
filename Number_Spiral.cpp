#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long

int test=1;

void solve()
{
  ll x,y;  //y rows and x columns (y,x)
  cin>>y>>x;
  ll ans;
  if(x>=y)    //upper Triangular matrix
  {
    if(x%2==0)
    {
      ans=(x-1)*(x-1)+y;
    }
    else
    {
       ans=x*x-y+1;
    }
  }
  else
  {
    if(y%2==0)
    {
      ans=y*y-x+1;
    }
    else
    {
      ans=(y-1)*(y-1)+x;
    }

    
  }
  
  cout<<ans<<endl;

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>test;
    while(test--)
    {
        solve();
    }

    return 0;
}