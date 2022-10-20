#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int mn = 9999999;
    for (int i = 0; i < n - 1; i++)
    {
        int x = a[i + 1] - a[i];
        mn = min(mn, x);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] - a[i] == mn)
        {
            v.push_back(a[i]);
            v.push_back(a[i + 1]);
        }
    }
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout<<endl;
    return 0;
}