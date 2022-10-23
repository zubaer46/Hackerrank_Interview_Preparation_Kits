#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0, c = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans ^= a[i];
            if (a[i] == 1)
                c++;
        }
        if ((c == n && ans == 1) || (c != n && ans == 0))
        {
            cout << "Second" << endl;
        }
        else
            cout << "First" << endl;
    }

    return 0;
}