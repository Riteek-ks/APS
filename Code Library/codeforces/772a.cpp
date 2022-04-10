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
        long long n;
        cin>>n;
        long long a[n+1];
        long long count=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(long long i=1;i<n-1;i++)
        {
            if(a[i-1]<a[i] and a[i]>a[i+1])
            {
                if(a[i]<a[i+2] and (i+2)<(n-1))
                a[i+1]=a[i+2];
                else
                a[i+1]=a[i];

                count++;
            }
        }
        cout<<count<<endl;
        for(long long i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
}
