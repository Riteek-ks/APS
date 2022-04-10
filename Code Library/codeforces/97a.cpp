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
   // cin >> tc;
    while (tc--)
    {
        int n;
        cin>>n;
        int a,b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a;
            b[a-1]=i+1;
        }
        for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
        line;
    }
    //cerr << "Time elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
}
