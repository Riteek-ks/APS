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
        long long n, x, a;
        cin >> n >> x;
        unordered_map<int, int> m;
        unordered_map<int, int> t;
        vector<int> v;
        int maxx = INT_MIN, oper = INT_MAX;
        for (i = 0;i<n;i++)
        {
            cin >> a;
            m[a]++;
            t[a^x]++;
            v.push_back(a);
            v.push_back(a ^ x);
        }
        for (auto pr : m)
        {
            if (pr.second >= maxx)
            {
                maxx = pr.second;
            }
            else if (pr.second == n)
            {
                maxx = n;
                break;
            }
        }
        long long k=0;
        if (x == 0)
        {

            cout << maxx <<" "<<0<< endl;
        }
        else
        {
            
            for (i = 0;i<v.size(); i++)
            {
                if (m[v[i]] +t[v[i]]>= maxx)
                {
                    if (maxx==m[v[i]] + t[v[i]])
                    {
                        oper =min(oper, t[v[i]]);
                        
                    }
                    else
                    {
                        maxx = m[v[i]] + t[v[i]];
                        oper = t[v[i]];
                    }
                }
            }
            cout << maxx <<" "<< oper << endl;
        }
    }
}