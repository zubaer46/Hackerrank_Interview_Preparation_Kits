#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int x = a[i] % 10;
        if (a[i] < 38)
            cout << a[i] << endl;
        else if (x > 7)
            cout << a[i] + 10 - x << endl;
        else if (x > 2 && x < 5)
            cout << a[i] + 5 - x << endl;
        else
            cout << a[i] << endl;
    }

    return 0;
}