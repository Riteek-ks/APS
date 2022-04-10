#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define vi vector<int>
#define f(i, a, b) for (i = a; i < b; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,i;
    cin >> t;
    while (t--)
    {
        ll a[11];
        f(i,1,11)
        cin>>a[i];
        ll s1=0,s2=0;
        f(i,1,11)
        {
            if(i%2==0 && a[i]==1)
            s2++;
            else if (i%2!=0 && a[i]==1) 
            s1++;
        }
        if(s1>s2)
        cout<<"1\n";
        else if(s1<s2)
        cout<<"2\n";
        else cout<<"0\n";
    }
    return 0;
}