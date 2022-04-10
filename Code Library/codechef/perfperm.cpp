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
        int n,k;
        cin>>n>>k;
        int a[n+1];
        for(int i=1;i<=n;i++)
        {
        a[i]=i;
        }
        if(n==1){
        cout<<1<<endl;
        continue;
        }
        if(k==n-1)
        {
            swap(a[1],a[n]);
        }
        else{
            int j=n-k;
            for(int i=1;i<n;i++)
            {
                if(j>0)
                swap(a[i],a[i+1]);
                if(j==0)
                break;
                j--;
            }
        }

        for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }
}
