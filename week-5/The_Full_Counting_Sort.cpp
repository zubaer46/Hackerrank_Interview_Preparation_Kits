#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c[n] = {0};
    vector<vector<string>> a(n / 2);
    string s;
    int x;

    for (int i = 0; i < n / 2; i++)
    {
        cin >> x >> s;

        c[x]++;
        a[x].push_back("-");
    }

    for (int i = n / 2; i < n; i++)
    {
        cin >> x >> s;
        c[x]++;
        a[x].push_back(s);
    }

    for (int i = 0; i < n / 2; i++)
    {
        int l;
        l = c[i];

        for (int j = 0; j < l; j++)
        {
            cout << a[i][j] << " ";
        }
    }

    return 0;
}