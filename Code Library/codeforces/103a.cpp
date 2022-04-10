#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define line cout<<'\n';
#define all(x) x.begin(),x.end()
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
    //cin >> tc;
    while (tc--)
    {
        int n,a;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
        cin>>a;
        v.pb(a);
        }
        int x=max_element(all(v))-v.begin();
        int y=min_element(v.rbegin(),v.rend())-v.rbegin();
        y=n-y-1;
        if(x>y)
        cout<<x-y-2+n<<endl;
        else
        cout<<x+n-y-1<<endl;
    }
    cerr << "Time elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
}
