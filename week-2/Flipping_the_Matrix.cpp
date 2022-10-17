#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j, sum = 0,ans;
        cin >> n;
        int a[2 * n][2 * n];
        for (i = 0; i < 2 * n; i++)
        {
            for (j = 0; j < 2 * n; j++)
            {
                cin >> a[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int ans = a[i][j];
                ans=max(ans,max(a[2*n-i-1][j],a[i][2*n-j-1]));
                ans = max(ans, a[2*n - i - 1][2*n - j - 1]);

                sum+=ans;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}