#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// long long t, i;
	// cin >> t;
	// while (t--)
	// {
		
	// }
	string s1,s2;
	cin>>s1>>s2;
	transform(s1.begin(),s1.end(),s1.begin(),::tolower);
	transform(s2.begin(),s2.end(),s2.begin(),::tolower);
	int flag1=1,flag2=1,flag3=1;
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]!=s2[i])
		{
			flag1=0;
			if(s1[i]>s2[i]){
			flag2=0;
			break;
			}
			else{
			flag3=0;
			break;
			}
		}
	}
	if(flag1==1)
	{
		cout<<0<<endl;
	}
	else if(flag1==0 and flag2==0)
	cout<<1<<endl;
	else if(flag1==0 and flag3==0)
	cout<<-1<<endl;
}