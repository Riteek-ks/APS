#include <bits/stdc++.h>
using namespace std;
int src(vector<int>&v,int n)
{
    std::vector<int>::iterator it;
    it = std::find (v.begin(), v.end(), n);
    if (it != v.end())
    {
       return 1;
    }
          
    return 0;
}
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
        int a[n+2];
        for(int i=1;i<=n;i++)
        {
            a[i]=i;
        }
        int k=n;
        int i=2;
        while(n!=0)
        {
            if(a[i-2]+a[i-1]!=a[i+1] and a[i]+a[i+2]!=a[i+3] and a[i-1]+a[i+1]!=a[i]){
            swap(a[i],a[i+1]);
            for(int j=1;j<=k;j++)
            cout<<a[j]<<" ";
            cout<<endl;
            i++;
            if(i==k)
            i=1;
            n--;
            }
            else{
            i++;
            if(i==k)
            i=1;
            }
           
        }

    }
}
