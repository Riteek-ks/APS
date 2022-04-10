#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t, i;
    cin >> t;
    while (t--)
    {
        long long p,a,b,c,x,y;
        cin>>p>>a>>b>>c>>x>>y;
        long long ans= min(x*a+b,y*a+c);
        ans=p/ans;
        cout<<ans<<endl;



    }
}
