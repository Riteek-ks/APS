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
        long long n,p,x,y;
        cin>>n>>p>>x>>y;
        long long a[n];
        for(i=1;i<=n;i++)
        cin>>a[i];
        int t=0;
            for(i=1;i<=n;i++)
            {
                if(p==i)
                break;
                else{
                if(a[i]==0)
                t=t+x;
                else
                t=t+y;
                }



            }
        cout<<t+y<<endl;
    
        
        

    }
}
