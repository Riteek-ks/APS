#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
		long long x;
		cin>>x;
		// long long a,b,c;
		// for(long long i=0;i<=x;i++)
		// {
		// 	for(long long j=0;j<=x;j++)
		// 	{
		// 		for(long long k=0;k<=x;k++)
		// 		{
		// 			if(((i | j)&(j | k)&(k | i))==x);
		// 			{
		// 				a=i;
		// 				c=j;
		// 				c=k;
		// 				break;
		// 			}
		// 		}
		// 	}
		// }
		// cout<<a<<" "<<b<<" "<<c<<endl; 
		long long a=0,b=x,c=x;
		for(long long i=0;i<31;i++)
		{
			if(!(b&((long long)1<<i)))
			{
				b=b|((long long)1<<i);
				break;
			}
			
		} 
		cout<<a<<" "<<b<<" "<<c<<endl;  
	}
	return 0;
}

