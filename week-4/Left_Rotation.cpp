#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;

    int a[n];
    int x = n - d;
    for (int i = x; i < n; i++)
    {

        cin >> a[i];
    }
    for (int i = 0; i < x; i++)
    {

        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}