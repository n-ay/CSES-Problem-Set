#include<bits/stdc++.h>
using namespace std;
#define ll long long

int test=1;

void solve()
{
  ll a,b;
  cin>>a>>b;

  if((a+b)%3|| abs(a-b)>(a+b)/3)
      cout<<"NO\n";
  else
  {
        cout<<"YES\n";
    
  }

}

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);

 cin>>test;

 while(test--)
     solve();

 return 0;
}