#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int maxi=x;
	    for(int i=0;i<n;i++)
	    {
	        int a;
	        cin>>a;
	        
	        maxi=max(maxi,x+a);
	        x+=a;
	    }
	    cout<<maxi<<endl;
	    
	}
	return 0;
}
