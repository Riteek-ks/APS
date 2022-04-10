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
        cin >> n ;
        int a;
        unordered_map<long long, long long> m;
        for (i = 0;i<n;i++)
        {
            cin >> a;
            m[a]++;
        }
        long long sn=0;
        for(auto pr:m)
        sn=max(sn,pr.second);
        long long max_list=sn/2;
        if(n==1 || sn==n)
        cout<<0<<endl;
        else{
        if(sn==1 )
        cout<<-1<<endl;
        else{
            cout<<n-sn+1<<endl;
        }
        }
    }
}