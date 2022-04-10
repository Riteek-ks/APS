#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int in=0,en=0;
	    for(int i=0;i<5;i++)
	    {
	        int r=0;
	        cin>>r;
	        if(r==1)
	        in++;
	        else if(r==2)
	        en++;
	    }
	    if(en==in)
	    cout<<"DRAW\n";
	    else if(en>in)
	    cout<<"ENGLAND\n";
	    else
	    cout<<"INDIA\n";
	}
	return 0;
}
