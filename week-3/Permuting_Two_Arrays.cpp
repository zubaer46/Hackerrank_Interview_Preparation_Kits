#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool x=0;
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        sort(a, a + n);
        sort(b, b + n, greater<int>());
        for (int i = 0; i < n; i++)
        {
            if (a[i] + b[i] >= k)
                continue;
            else
            {
                x=1;
                cout<<"NO"<< endl;
                break;

            }
        }
        if(x==0)
        {
            cout<<"YES"<< endl;
        }
    }
    return 0;
}