#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        if (m == 1)
        {
            cout << 2 << endl;
        }
        else
        {
            if (n % 2 == 1)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }

    return 0;
}