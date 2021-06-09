#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007;


int test=1;



void solve()
{
  ll n;
  cin>>n;
  ll x=2;
  ll ans=1;
 
  while(n>0)
  {
    if(n&1)
      ans=(ans*x)%mod;
    n=n>>1;
    x=(x*x)%mod;
    
  }
  
  cout<<ans;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

 //  cin>>test;
   while(test--)
   {
       solve();
   }

    return 0;
}