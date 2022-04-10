#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t, i;
    cin >> t;
    while (t--){
    long long n, s;

    cin >> n >> s;

    long long ans = n * (n + 1) / 2;

    ans = ans - s;

    if (ans >= 1 and ans <= n)
        cout << ans << endl;

    else
        cout << -1 << endl;
}

}
