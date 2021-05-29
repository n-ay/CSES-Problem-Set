#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000
const ll MOD = 1e9 + 7;
ll weird(ll n)
{
    cout<<n<<" ";
    if(n==1)
     return 1;
    else if(n%2==0)
      {
          return weird((n/2)%MOD);
      }
    else
    {
       return weird((n*3+1)%MOD);
    }

}


int main()
{
   ll n; cin>>n;
   weird(n);

    return 0;
}