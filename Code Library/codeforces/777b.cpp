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
		int n, m;
		cin >> n >> m;
		int a[n][m];
		for (int i = 0; i < n; i++)
		{
			string s;
			cin>>s;
			for(int j=0;j<m;j++)
			a[i][j]=int(s[j]);
			
		}
		
		int flag1 = 0;
		for (int i = 0; i < n-1; i++)
		{
			for (int j = 0; j < m-1; j++)
			{
				int sum = a[i][j]+a[i+1][j]+a[i][j+1]+a[i+1][j+1];
				if(sum==195)
				{
					flag1=1;
					break;
				}
			}
		}
		if (flag1 == 1)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
}