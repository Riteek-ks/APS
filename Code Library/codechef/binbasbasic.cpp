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
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		int cnt = 0, flg = 0;
		if (n == 1)
		{
			cout << "YES" << endl;
			continue;
		}
		else
		{
			for (int i = 0; i < n / 2; i++)
			{
				if (s[i] != s[n - i - 1])
					cnt++;

				if (cnt > k)
				{
					flg = 1;
					break;
				}
			}
		}
		if (flg == 1)
			cout << "NO" << endl;
		else
		{
			if (n % 2 == 0)
			{
				if ((k - cnt) % 2 == 0)
					cout << "YES" << endl;
				else
					cout << "NO" << endl;
			}
			else
			{
				cout << "YES" << endl;
			}
		}
	}
}