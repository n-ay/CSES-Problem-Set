#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin>>n;
    int a[n-1];
    for(int i=0;i<n-1;i++) { cin>>a[i];}

    sort(a,a+n-1);
    
    if(n==2)
    {
        if(a[0]==1)
          cout<<2;
        else
        {
            cout<<1;
        }
        return 0;
    }
    for(int i=1;i<n-1;i++)
    {
        if(a[i]!=a[i-1]+1)
         {
             cout<<a[i]-1;
             return 0;
         }
    }
    cout<<n;

    return 0;
}