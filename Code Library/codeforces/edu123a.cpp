#include <bits/stdc++.h>
using namespace std;
int src(vector<int>&v,int n)
{
    std::vector<int>::iterator it;
    it = std::find (v.begin(), v.end(), n);
    if (it != v.end())
    {
       return 1;
    }
          
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t, i;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        vector<int>v;
        int flag=1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='r')
            v.push_back(1);
            else if(s[i]=='b')
            v.push_back(2);
            else if(s[i]=='g')
            v.push_back(3);
            else if(s[i]=='R')
            {
                int i=src(v,1);
                if(i==0){
                flag=0;
                break;
                }

            }
            else if(s[i]=='G')
            {
                int i=src(v,3);
                if(i==0){
                flag=0;
                break;
                }

            }
            else if(s[i]=='B')
            {
                int i=src(v,2);
                if(i==0){
                flag=0;
                break;
                }

            }
        }
        if(flag==0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}
