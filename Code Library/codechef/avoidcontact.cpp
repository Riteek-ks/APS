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
	    if(y==0)
	    cout<<x<<endl;
	    else if(x==y)
	    cout<<2*x-1<<endl;
	    else
	    cout<<x+y<<endl;
	}
	return 0;
}
