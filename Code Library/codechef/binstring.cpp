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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        int i1=0,i0=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0' and i0==0)
            {
                count++;
                i0=1;
                i1=0;
            }
            if(s[i]=='1' and i1==0)
            {
                count++;
                i1=1;
                i0=0;
            }
        }
        cout<<count<<endl;
        
    }
}
