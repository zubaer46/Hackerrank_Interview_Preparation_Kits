#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s = 0;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (i == j)
                s += a[i][j];
        }
    }
    
    int sum = 0;
    int x = n - 1, y = 0;
    while (x >= 0 && y<n)
    {
        sum += a[y][x];
        x--;
        y++;
    }
    
    cout << abs(s - sum) << endl;
    return 0;
}