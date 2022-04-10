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
        int a[5][5];
        int x,y;
        for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
        cout<<abs(x-2)+abs(y-2)<<endl;
    }
    cerr << "Time elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
}
