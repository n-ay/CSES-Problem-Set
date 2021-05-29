#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    ll x[n];
    for(int i=0;i<n;i++) cin>>x[i];

    ll moves=0;
    ll temp=0;
    for(int i=0;i<n-1;i++)
    {
        if(x[i]>x[i+1])
        {
           temp=x[i]-x[i+1];
           moves+=temp;
           x[i+1]+=temp;
           //cout<<moves<<" ";
        }
    }
    cout<<"\n"<<moves;
    return 0;
}