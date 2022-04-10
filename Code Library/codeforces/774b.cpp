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
        long long n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        vector<long long>pre,pre1;
        long long sum=0,sum1=0;
        for(long long i=0;i<n;i++){
            sum=sum+a[i];
            sum1=sum1+a[n-i-1];
            pre1.push_back(sum1);
            pre.push_back(sum);
        }
        // for(auto it:pre1)
        // cout<<it;
        long long k=0,j=1;
        int flag=0;
        while(j<n)
        {
            if(pre[j]<pre1[k])
            {
                flag=1;
                break;
            }
            j++;
            k++;
        }
        if(flag==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
