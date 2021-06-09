#include<bits/stdc++.h>
using namespace std;
#define ll long long

int test=1;

void solve()
{
  ll n;
  cin>>n;
  ll sum=0;
  vector<int> first;
  vector<int> second;
  
  sum=n*(n+1)/2;

   if(sum%2!=0)
     {
        cout<<"NO";
        return;
     }

   sum/=2;
   
   for(ll i=n,temp=0;i>=1;i--)
   {
       if(temp+i<=sum)
        { 
            temp+=i;
            first.push_back(i);
        }
       
       else
       {
           second.push_back(i);
       }
   }
   sort(first.begin(),first.end());
   sort(second.begin(),second.end());
   
   cout<<"YES"<<endl;
   cout<<first.size()<<endl;
   for(int it: first)
     cout<<it<<" ";
   cout<<endl;
   cout<<second.size()<<endl;
   for(int it: second)
     cout<<it<<" ";
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
 // cin>>test;
  while(test--)
  {
      solve();
  }

 return 0;
}