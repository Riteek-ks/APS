#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define line cout<<'\n';
#define mod 1000000007

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
    cout.tie(NULL);
    fileio();
    long long tc;
    tc=1;
    cin >> tc;
    while (tc--)
    {
        long long n,s;
        cin>>n>>s;
        long long j=n*n;
        cout<<s/j<<endl;
    }
}
