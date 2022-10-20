#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, mn = 1e8;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n-1; i++)
    {
        mn=min(mn,abs(a[i]-a[i+1]));
    }
    cout<<mn<<endl;

    return 0;
}