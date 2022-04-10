#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define line cout<<'\n';
#define mod 1000000007
#define endl '\n'

void fileio()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fileio();
    long long tc;
    tc=1;
    cin >> tc;
    while (tc--)
    {
        ll n,b,x,y;
        cin>>n>>b>>x>>y;
        ll sum=0;
        ll a[n];
        a[0]=0;
        for(int i=1;i<=n;i++)
        {
            if(a[i-1]+x<=b)
            a[i]=a[i-1]+x;
            else
            a[i]=a[i-1]-y;
            sum=sum+a[i];
        }
        cout<<sum<<endl;
    }
    cerr << "Time elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
}
