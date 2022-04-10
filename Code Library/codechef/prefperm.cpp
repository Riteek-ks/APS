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
        int n,k;
        cin>>n>>k;
        int a[k+1];
        for(int i=0;i<k;i++)
        cin>>a[i];
        int l=0;
        for(int i=0;i<k;i++)
        {
            int j=a[i];
            while(j!=l)
            {
                cout<<j<<" ";
                j--;
            }
            l=a[i];
        }
        cout<<endl;
    }
}
