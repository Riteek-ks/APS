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
		string s;
		cin>>s;
		int e=0, o=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='0')
			e++;
			else
			o++;
		}
		if(n%2!=0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			if(e%2==0)
			cout<<"YES"<<endl;
			else if(e==o)
			cout<<"YES"<<endl;
			else
			cout<<"NO"<<endl;
		}
	}
}