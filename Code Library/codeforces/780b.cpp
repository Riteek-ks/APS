#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
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
        int n;
        cin>>n;
        vector<ll>v;
        ll a;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.pb(a);
        }
        sort(v.begin(),v.end());
        bool b= false;
        if(n==1 && v[0]>1)
        cout<<"NO"<<endl;
        else if(n==1 && v[0]<=1)
        cout<<"YES"<<endl;
        else
        {
            if(v[n-1]-v[n-2]<=1)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
}