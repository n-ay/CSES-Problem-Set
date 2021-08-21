#include<bits/stdc++.h>
using namespace std;
#define ll long long

int test=1;

void solve()
{
   // int n;
   // cin>>n;
    string k;
    cin>>k;
    //cout<<"k: "<<k<<endl;
    queue<string> q;
    int count=0;
    sort(k.begin(),k.end());
   // cout<<"k: "<<k<<endl;
    do
    {
        count++;
        q.push(k);
    }while(next_permutation(k.begin(),k.end()));
    cout<<count<<endl;
    while(!q.empty())
    {
        string temp=q.front();
        cout<<temp<<endl;
        q.pop();
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