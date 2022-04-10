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
        string s;
        cin>>s;
        long long n=s.length();
        int count=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='0' and s[i+1]=='1')
            count++;
            else if(s[i]=='1' and s[i+1]=='0')
            count++;
            else
            continue;
        }
        if(s[0]=='0')
        cout<<count+1<<endl;
        else
        cout<<count<<endl;



    }
}
