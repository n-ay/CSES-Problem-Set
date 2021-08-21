#include<bits/stdc++.h>
using namespace std;
#define ll long long

int test=1;

int moves(int n)
{
    int res=1<<n;
    res--;
    return res;
}
void towerOfHanoi(int n, int left, int middle, int right)
{
    if(n<=0)
       return;
   towerOfHanoi(n-1, left,right,middle);
   cout<<left<<" "<<right<<endl;
   towerOfHanoi(n-1,middle,left,right);
   
}
void solve()
{
    int n;
    cin>>n;
    cout<<moves(n)<<endl;
    towerOfHanoi(n,1,2,3);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cin>>test;
    while(test--){
        solve();
    }

    return 0;
}