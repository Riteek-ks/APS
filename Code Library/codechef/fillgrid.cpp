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
        long long v[n][n];
        if (n %2==1 )
        {
            for ( i = 0; i < n; i++)
            for ( int j = 0; j < n; j++)
            v[i][j]=1;
            int k = 0;
            for ( i = 0; i < n; i++)
            {
                v[i][k] = -1;
                k++;
            }
            for (i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                cout << v[i][j] << " ";

                cout << endl;
            }
        }
        else
        {
            for ( i = 0; i < n; i++)
            for ( int j = 0; j < n; j++)
            v[i][j]=-1;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                cout << v[i][j] << " ";

                cout << endl;
            }
        }
    }
}
