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
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        if(a+b<=d && c<=e ||a+c<=d && b<=e || b+c<=d && a<=e)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}