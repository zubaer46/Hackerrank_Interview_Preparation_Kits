#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x = 0, y = 0;
        bool z = 0;
        cin >> n;
        int a[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            y += a[i];
        }
        y -= a[0];
        a[n] = 0;
        for (int i = 0; i < n; i++)
        {
            if (x == y)
            {
                z = 1;
                break;
            }
            x += a[i];
            y -= a[i + 1];
        }
        if (z == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}