#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double x0 = 0, x1 = 0, x2 = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            x0++;
        else if (a[i] > 0)
            x1++;
        else
            x2++;
    }
    cout<<fixed<<x1/n<<endl;
    cout << fixed << x2 / n << endl;
    cout << fixed << x0 / n << endl;
}