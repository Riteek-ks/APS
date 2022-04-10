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
        int n;
        cin >> n;
        int a[n];
        int o = 0, e = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }
        if (o == 0 || e == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                if (a[i] % 2 != 0)
                {
                    cout << a[i] << " ";
                }
            }
            for (i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    cout << a[i] << " ";
                }
            }
        }
        cout<<endl;
    }
}
