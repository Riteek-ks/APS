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
		cin >> n;
		vector<int> v, f;

		int i = 0;
		int j = 0;
		while (i < n)
		{
			if (j % 2 == 0)
			{
				i = i + 1;
				j++;
				v.push_back(1);
			}
			else
			{
				i = i + 2;
				j++;
				v.push_back(2);
			}
		}

		int k = 0;
		int l = 0;
		while (k < n)
		{
			if (l % 2 != 0)
			{
				k = k + 1;
				l++;
				f.push_back(1);
			}
			else
			{
				k = k + 2;
				l++;
				f.push_back(2);
			}
		}
		if (k == n)
		{
			for (auto it : f)
				cout << it;
			cout << endl;
		}
		else
		{
			for (auto it : v)
				cout << it;
			cout << endl;
		}
	}
}