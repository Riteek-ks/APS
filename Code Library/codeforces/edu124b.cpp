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
		int n;
		cin>>n;
		long long a[n];
		a[0]=1;
		int g=0;
		for(int i=1;i<n;i++)
		{
			a[i]=a[i-1]*3;
			if(a[i]>1e9)
			{
				g=1;
				break;
			}
			if(a[i]+a[i-1]>2*abs(a[i]-a[i-1]))
			{
				g=1;
				break;
			}
		}
		if(g==1)
		cout<<"NO"<<endl;
		else{
		cout<<"YES"<<endl;
		for(auto it:a)
		cout<<it<<" ";
		cout<<endl;
		}
	}
}