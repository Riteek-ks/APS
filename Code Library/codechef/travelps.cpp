#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,i;
    cin >> t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        int d=0,e=0;
        for(i = 0; s[i] != '\0'; i++)
        {
            if(s[i]=='0')
            d++;
            else
            e++;
        }
        cout<<d*a+e*b<<endl;

    }
}