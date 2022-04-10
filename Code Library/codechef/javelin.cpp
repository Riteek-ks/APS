#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define vi vector<int>
#define f(i, a, b) for(i = a; i < b; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,i;
    cin >> t;
    while (t--)
    {
       int n,m,x,k=0,c;
       cin>>n>>m>>x;
       int a[n+1],b[8001];
       vector<int> v;
       f(i,0,n)
       {
           cin>>a[i];
           b[a[i]]=i+1;
       }
        f(i,0,n)
        {
            if(a[i]>=m)
            {
                k++;
                v.push_back(i+1);
            }
        }
        if(k>=x)
        {
            sort(v.begin(),v.end());
            cout<<k<<" ";
            f(i,0,k)
            cout<<v[i]<<" ";
        }
        else{
            sort(a,a+n);
            f(i,n-x,n-k)
            v.push_back(b[a[i]]);
            sort(v.begin(),v.end());
            cout<<x<<" ";
            f(i,0,x)
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}