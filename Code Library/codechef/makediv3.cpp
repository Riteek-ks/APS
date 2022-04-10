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
        int x;
        cin>>x;
        vector<int>v;
        for(i=0;i<x-1;i++)
        v.push_back(3);

        if(x%3!=0)
        v.push_back(3);
        else
        v.push_back(9);

        for(auto it:v)
        cout<<it;
        cout<<endl;
    }
}
