#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool x = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n, greater<int>());
    for (int i = 0; i < n - 2; i++)
    {
        if (a[i + 1] + a[i + 2] > a[i])
        {
            cout << a[i + 2] << " " << a[i + 1] << " " << a[i] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}