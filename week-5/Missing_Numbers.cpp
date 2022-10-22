#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int a[n];
    map<int, int> mp;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        mp[b[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]--;
    }
    for (int i = 0; i < m; i++)
    {
        if (mp[b[i]] != 0)
        {
            s.insert(b[i]);
        }
    }
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}