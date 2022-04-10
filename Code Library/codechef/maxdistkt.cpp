#include <bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<long long,long long> &a, const  pair<long long,long long> &b)
{
    return (a.second < b.second);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t, i;
    cin >> t;
    while (t--)
    {
        long long n,b;
        //long long b[n];
        cin>>n;
        vector<pair<long long,long long>>v;
        long long a=0;
        for(long long i=0;i<n;i++)
        {
            //cin>>b[i];
            cin>>b;
            v.push_back(make_pair(b,i));
        }
        sort(v.begin(),v.end());
        for(long long i=0;i<n;i++)
        {
           if(v[i].first>a)
           {
               v[i].first=a;
               a++;
           } 
           else if(v[i].first==a)
           v[i].first=a;
           //cout<<a;
        }
        sort(v.begin(),v.end(),sortbysec);
        
        for(auto it: v)
        cout<<it.first<<" ";
        cout<<endl;

    }
}