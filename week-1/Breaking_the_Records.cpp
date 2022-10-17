#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, mn, mx, c1 = 0, c2 = 0;
    cin >> n;
    int a[n];
    cin >> a[0];
    mn = a[0], mx = a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > mx)
        {
            mx = a[i];
            c1++;
        }
        if (a[i] < mn)
        {
            mn = a[i];
            c2++;
        }
    }
    cout << c1 << " " << c2 << endl;
    return 0;
}