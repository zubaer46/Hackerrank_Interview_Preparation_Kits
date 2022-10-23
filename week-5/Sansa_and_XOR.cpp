#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int ans=0;
            for (int i = 0; i < n; i += 2)
            {
                ans ^= a[i];
            }
            cout << ans << endl;
        }
    }
    return 0;
}