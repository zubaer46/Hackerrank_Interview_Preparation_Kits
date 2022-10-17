#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c = 0, st = 0;
    string s;
    cin >> n >> s;
    int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     if (s[i] == 'D')
    //     {
    //         st--;
    //         a[i] = st;
    //     }
    //     else if (s[i] == 'U')
    //     {
    //         st++;
    //         a[i] = st;
    //     }

    //     if (st == 0&&a[i-1]==-1)
    //         c++;
    // }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'U')
            st++;
        else
        {
            if (st == 0)
                c++;
            st--;
        }
    }
    cout << c << endl;
    return 0;
}