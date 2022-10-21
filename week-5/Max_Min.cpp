#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k,x,y,mn=1e9+5;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a,a+n);
    for(int i = 0; i <=n-k; i++)
    {
       mn=min(mn, a[i+k-1]-a[i]);
    }
    cout<<mn<<endl;
    return 0;
}