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
		string s;
		cin>>s;
		char c;
		cin>>c;
		vector<int>v;
		for(int i=0;i<s.length();i++)
		{
			if( s[i]==c )
			v.push_back(i);
			
		}
		int flag1=0;
		for(auto it:v)
		{
			if(it%2==0 and (s.length()-it-1)%2==0)
			{
				flag1=1;
				break;
			}
		}
		if(flag1==1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}