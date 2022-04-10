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
	string s;
	cin>>s;
	int count1=0,count2=0,count3=0;
	for(auto it:s)
	{
		if(it=='1')
		count1++;
		if(it=='2')
		count2++;
		if(it=='3')
		count3++;
	}
	string s1;
	while(count1!=0)
	{
		if(s1.size()==0)
		s1+='1';
		else{
		s1+="+";
		s1+="1";
		}
		count1--;
	}
	while(count2!=0)
	{
		if(s1.size()==0)
		s1+='2';
		else{
		s1+="+";
		s1+="2";
		}
		count2--;
	}
	while(count3!=0)
	{
		if(s1.size()==0)
		s1+='3';
		else{
		s1+="+";
		s1+="3";
		}
		count3--;
	}
	cout<<s1<<endl;
}