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
        int a,b;
        cin>>a>>b;
        if(a!=0)
        cout<<2*b+a+1<<endl;
        else
        cout<<1<<endl;

    }
}