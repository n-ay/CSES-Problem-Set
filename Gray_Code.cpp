#include<bits/stdc++.h>
using namespace std;
#define ll long long

int test=1;
bool value(int num, int pos)
{
    return (num&(1<<pos))!=0;
}
void solve()
{
 int n;
 cin>>n;

 for(int num=0; num< (1<<n);num++)
 {
   cout<<value(num,n-1);
   for(int power=n-2; power>=0;power--)
       cout<<(value(num,power)^value(num,power+1));
    cout<<endl;
 }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
   // cin>>test;
    while(test--){
        solve();
    }

    return 0;
}