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
        int x,y;
        cin>>x>>y;
        double d=sqrt(x*x+y*y);
        if(x==0 and y==0)
        {
            cout<<0<<endl;
            continue;
        }
        if(d==(int)d)
        cout<<1<<endl;
        else
        cout<<2<<endl;
    }
    cerr << "Time elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
}
