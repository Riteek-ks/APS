#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    long long x,y;
	    cin>>x>>y;
	    long long a,b;
	    a=abs(x);
	    b=abs(y);
	    if((a+b)%2==0)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
