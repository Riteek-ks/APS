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
		long long n;
		cin >> n;
		long long a[n];
		unordered_map<int, int> m;
		vector<int> s;
		for (long long i = 0; i < n; i++)
		{
			cin >> a[i];
			m[a[i] % 2]++;
			if (a[i] % 2 == 0)
				s.push_back(0);
			else
				s.push_back(1);
		}
		auto it1=m.begin();
		if (m.size() == 1 and it1->first==0)
		{
			cout << "-1" << endl;
			continue;
		}
		else
		{
			vector<int> s1;
			vector<int> s2;
			for (i = 0; i < n; i++)
			{
				if (i % 2 == 0)
				{
					s1.push_back(0);
					s2.push_back(1);
				}
				else
				{
					s1.push_back(1);
					s2.push_back(0);
				}
			}
			int count1 = 0, count2 = 0;
			vector<int> s11, s10, s21, s20;
			vector<int> v1, v2;
			for (i = 0; i < n; i++)
			{
				if (s[i] != s1[i])
				{
					count1++;
					v1.push_back(i);
				}
				else if (s[i] == s1[i] and s[i] == 1)
					s11.push_back(i);
				else if (s[i] == s1[i] and s[i] == 0)
					s10.push_back(i);

				if (s[i] != s2[i])
				{
					count2++;
					v2.push_back(i);
				}
				else if (s[i] == s2[i] and s[i] == 1)
					s21.push_back(i);
				else if (s[i] == s2[i] and s[i] == 0)
					s20.push_back(i);
			}
			//if(s11.size()==0)
			if (s11.size() == 0 and s21.size() == 0)
				cout << "-1" << endl;
			else
			{
				if (count1 > count2)
				{
					cout << count2 << endl;
					for (auto it : v2)
					{
						cout << it + 1 << " " << s21[s21.size()-1] + 1 << endl;
					}
				}
				else
				{
					if (s11.size() != 0)
					{
						cout << count1 << endl;
						for (auto it : v1)
						{
							cout << it + 1 << " " << s11[s11.size()-1] + 1 << endl;
						}
					}
					else
					{
						cout << count2 << endl;
						for (auto it : v2)
						{
							cout << it + 1 << " " << s21[s21.size()-1] + 1 << endl;
						}
					}
				}
			}
		}
		// else if (m.size() > 1 and n == 2)
		// {
		// 	cout << "0" << endl;
		// }

		//cout<<count<<endl;
	}
}