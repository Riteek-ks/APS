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
		long long l, r, a;
		cin >> l >> r >> a;
		long long d=(r/a)+(r%a);
		long long e=((r/a)*a)-1;
		long long f=(e/a)+(e%a);
		if(l>e)
		cout<<d<<endl;
		else
		cout<<max(d,f)<<endl;
	}
}