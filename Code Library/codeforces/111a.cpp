#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // long long t, i;
    // cin >> t;
    // while (t--)
    // {
       int n;
       cin>>n;
       vector<int>v;
       int a;
       long long sum=0;
       for(int i=0;i<n;i++)
       {
           cin>>a;
           sum=sum+a;
           v.push_back(a);
       }
       sort(v.begin(),v.end());
       long long twi=0;
       for(int i=n-1;i>=0;i--)
       {
           twi=twi+v[i];
           if(sum-twi<twi){
           cout<<n-i<<endl;
           break;
           }
       } 
       
   // }
}
