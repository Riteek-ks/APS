#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t,i;
    cin >> t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        if(n>=s)
        cout<<s<<endl;
        else
        {
            int min=s-n;
            
            int ans=n-min;
            cout<<ans<<endl;
            

        }


    }
}
