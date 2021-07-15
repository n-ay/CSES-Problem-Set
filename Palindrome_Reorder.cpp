#include<bits/stdc++.h>
using namespace std;
#define ll long long

int test=1;


void solve()
{
 string s;
 cin>>s;
 int count[26]={0};
 int n=s.length();
 
 for(int i=0;i<n;i++)
 {
     count[s[i]-'A']++;   
 }

 int counto=0;
 for(int i=0;i<26;i++)
 {
     if(count[i]%2!=0) counto++;
 }
 if(counto>1)
 {
     cout<<"NO SOLUTION";
     return;
 }

 for(int i=0;i<26;i++)
 {
     if(count[i]%2==0)
     {
         for(int j=0;j<count[i]/2;j++) cout<<char('A'+i);
     }
 }
 for(int i=0;i<26;i++)
 {
     if(count[i]%2)
     {
         for(int j=0;j<count[i];j++) cout<<char('A'+i);
     }
 }
 
 for(int i=25;i>=0;i--)
 {
      if(count[i]%2==0)
     {
         for(int j=0;j<count[i]/2;j++) cout<<char('A'+i);
     }
 }
cout<<"\n";

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
  //  cin>>test;
    while(test--)
        solve();
}