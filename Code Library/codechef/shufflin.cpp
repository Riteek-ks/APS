#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t,i;
    cin >> t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n],b[n];
        for(i=1;i<=n;i++)
        cin>>a[i];
        long long sum=0,odd=0,even=0;
        for(i=1;i<=n;i++)
        {
            if(a[i]%2==0)
            even++;
            else 
            odd++;
                
        }
        sum=min(even,(n+1)/2)+min(odd,n/2);
        cout<<sum<<endl;
       


    
    }
}