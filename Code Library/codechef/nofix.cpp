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
		int count=0;
		int a;
		for(int i=1;i<=n;i++)
		{
			cin>>a;
			if(a==i+count)
			count++;
		}
		cout<<count<<endl;
	}
}