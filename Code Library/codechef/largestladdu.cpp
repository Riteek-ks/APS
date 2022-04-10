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
        long long n,A;
        cin>>n;
        long long c=pow(2,n);
        vector<long long> v;
        for(long long i=0;i<c;i++)
        {
            cin>>A;
            v.push_back(A);

        }
        sort(v.begin(),v.end());
        long long a=v.front();
        long long b=v.back();
        if(b-a<=1)
        cout<<"YES\n";
        else
        cout<<"NO\n";

        
    }
}