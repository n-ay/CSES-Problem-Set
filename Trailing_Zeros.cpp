#include<bits/stdc++.h>
#define ll long long
using namespace std;


int test=1;

void solve()
{
  ll n;
  cin>>n;
  ll ans=0;
  
  for(ll i=5;n/i>=1;i*=5)
  {
      ans+=(n/i);


  }
  cout<<ans;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cin>>test;
    while(test--)
        solve();

    return 0;
}