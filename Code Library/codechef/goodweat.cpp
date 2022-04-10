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
        int a[7];
        for (i = 0; i < 7; i++)
            cin >> a[i];
        int s = 0, r = 0;

        for (i = 0; i < 7; i++)
        {
            if (a[i] == 1)
                s++;
            else
                r++;
        }
        if (s > r)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
