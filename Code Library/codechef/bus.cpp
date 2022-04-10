#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
        ll n,k,q;
        cin>>n>>k>>q;
        ll m[q];
        char c[q];
        f(i,0,q)
        {
            cin>>c[i]>>m[i];
        }
        ll s=0;
        vector<int> v;
        bool b1=true;
        f(i,0,q)
        {
            if(c[i]=='+')
            {
                v.push_back(m[i]);
                s++;
                if(s<=k)
                continue;
                else{
                 b1=false;
                }
            }
            else{
                vector<int>::iterator it=find(v.begin(),v.end(),m[i]);
                if (it != v.end())
                s--;
                else{
                
                 b1=false;
                }
            
            }
        }
        if(b1==true)
        cout<<"Consistent"<<endl;
        else
        cout<<"Inconsistent"<<endl;
   


    }
    return 0;
}