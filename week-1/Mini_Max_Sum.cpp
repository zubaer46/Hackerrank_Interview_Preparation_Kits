#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + 5);
    cout << sum - a[4] << " " << sum - a[0] << endl;
    return 0;
}