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
        long long n,m;
        cin >> n>>m ;
        vector<long long>v;
        string s;
        if(n>m)
        {
            s=s+'0';
            while(n!=0)
            {
                s=s+'1';
                if(m>0)
                s=s+'0';
                else if(m<=0 and n!=1){
                s=s+'0';
                s=s+'0';
                }
                else if(m<=0 and n==1){
                    s=s+'0';
                }
                m--;
                n--;
            }
            cout<<s.size()<<endl;
        for(auto it:s)
        cout<<it;
        cout<<endl;
            
        }
        else if(n<m)
        {
            s=s+'1';
            while(m!=0)
            {
                s=s+'0';
                if(n>0)
                s=s+'1';
                else if(n<=0 and m!=1){
                s=s+'1';
                s=s+'1';
                }
                else if(n<=0 and m==1){
                    s=s+'1';
                }
                m--;
                n--;
            }
            cout<<s.size()<<endl;
        for(auto it:s)
        cout<<it;
        cout<<endl;
        }
        else if(n=m)
        {
            for(int i=1;i<=m+n+2;i++)
            {
                if(i%2==0)
                v.push_back(0);
                else if(i%2!=0)
                v.push_back(1);

            }
        cout<<v.size()<<endl;
        for(auto it:v)
        cout<<it;
        cout<<endl;
        }
        
        
    }
}