#include<iostream>
using namespace std;
int main()
{
    int r,o,c;
    cin>>r;
     cin>>o;
      cin>>c;
    int s=r-c;
    int b=(20-o)*6;
    int R=6*b;
    if(R>s)
        cout<<"YES";
    else
        cout<<"NO";
}
