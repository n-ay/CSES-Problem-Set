#include<bits/stdc++.h>
using namespace std;
#define ll long long

int test=1;

void solve()
{
    int n;
    cin>>n;
    ll ans=0;
    for(ll k=1;k<=n;k++)
    {
        if(k==1)
        {
            ans=0;
            cout<<ans<<endl;
            
        }
        else if(k==2)
        {
            ans=6;
            cout<<ans<<endl;
           
        }

        else if(k==3)
        {
            ans=28;
            cout<<ans<<endl;
            
        }
        else{
            ans=(4*(k*k-3) + 8*(k*k-4) + 4*(k-3)*(k*k-5) + 4*(k-4)*(k*k-7) + (k-4)*(k-4)*(k*k-9))/2;
            cout<<ans;
            cout<<endl;
        }
    }

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
}