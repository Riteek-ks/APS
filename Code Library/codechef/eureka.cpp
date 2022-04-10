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
		double d=pow(0.143*n,n);
		if(d-floor(d)<0.5)
		cout<<floor(d)<<endl;
		else
		cout<<floor(d)+1<<endl;
	}
}