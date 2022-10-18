#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d, m, c = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> d >> m;

    for (int i = 0; i < n - m+1; i++)
    {
        int sum = 0;

        for (int j = i; j < i+m; j++)
        {
            sum +=a[j];
        }
        if(sum==d)
        c++;
    }
    cout<<c<<endl;

    return 0;
}