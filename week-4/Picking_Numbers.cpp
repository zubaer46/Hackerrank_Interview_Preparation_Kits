#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, mx = -1, c = 1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int x = a[0];
    for (int i = 1; i < n; i++)
    {

        if (abs(x - a[i]) > 1)
        {

            if (c > mx)
            {
                mx = c;
            }
            c = 1;
            x = a[i];
        }
        else
        {

            c++;
        }
    }
    if (mx == -1)
        cout << c << endl;
    else
        cout << mx << endl;

    return 0;
}