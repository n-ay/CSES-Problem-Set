#include<bits/stdc++.h>
using namespace std;
#define ll long long

int test=1;

void solve()
{
 int n;
 cin>>n;
 int a[n];
 ll minSum=INT_MAX;
 for(int i=0;i<n;i++) cin>>a[i];

 for(int i=0;i<(1<<n);i++)
 {
     ll sumA=0;         //3 2 1 4 1
     ll sumB=0;         //1 1 0 0 0
   for(int j=0;j<n;j++)
   {
       if(i&(1<<j))
       {
           sumA+=a[j];
       }
       else sumB+=a[j];
   }
   if(abs(sumB-sumA)<minSum)
      minSum=abs(sumB-sumA);
 }
 cout<<minSum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
  //  cin>>test;
    while(test--){
        solve();
    }

    return 0;
}