#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t,i;
    cin >> t;
    while(t--)
    {
        int j;
        cin>>j;
        int dir=j%4;
        if(dir==1)
        cout<<"East"<<endl;
        else if(dir==2)
        cout<<"South"<<endl;
        else if(dir==3)
        cout<<"West"<<endl;
        else if(dir==0)
        cout<<"North"<<endl;


    }
}

