#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'

void fileio()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fileio();
    long long tc;
    tc = 1;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        stack<char> st;
        set<char> c;
        ll cnt = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            auto it = c.find(s[i]);
            //st.push(s[i]);
            //cout<<4;
            if (it != c.end())
            {
                //cout<<3;
                while (!st.empty())
                {
                    if (s[i] == st.top())
                    {
                        //cout<<st.top();
                        st.pop();
                        c.erase(s[i]);
                    }
                    else
                    {
                        //cout<<st.top();
                        c.erase(st.top());
                        st.pop();
                        cnt++;
                        //cout << 2;
                    }
                    c.erase(s[i]);
                }
            }
            else
            {
                //cout<<s[i];
                st.push(s[i]);
                c.insert(s[i]);
            }
        }
       // cout<<st.size();
        cout << cnt + st.size() << endl;
    }
}