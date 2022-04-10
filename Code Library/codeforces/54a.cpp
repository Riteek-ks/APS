#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // long long t, i;
    // cin >> t;
    // while (t--)
    // {
        
    // }
    string s;
    cin>>s;
    string t="hello";
    int i=0,flg=0;
    for(int j=0;j<s.size();j++)
    {
        if(s[j]==t[i])
        i++;
        if(i==5)
        {
            flg=1;
            break;
        }
    }
    if(flg==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
