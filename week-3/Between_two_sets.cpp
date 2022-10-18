#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, x = 0, y = 999;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        x = max(x, a[i]);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        y = min(y, b[i]);
    }

    int ans = 0;
    for (int j = x; j <= y; j++)
    {
        bool ok = true;
        for (int i = 0; i < n; i++)
            if (j % a[i] != 0)
            {
                ok = false;
                break;
            }

        for (int i = 0; i < m; i++)
            if (b[i] % j != 0)
            {
                ok = false;
                break;
            }

        if (ok)
            ans++;
    }
    cout << ans << endl;

    return 0;
}