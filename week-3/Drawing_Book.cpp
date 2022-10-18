#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p,q;
    cin >> n >> p;

    if (n % 2 == 0)
        q = (n - p + 1) / 2;
    else
        q = (n - p) / 2;

    cout << min(p / 2, q )<< endl;
    
    return 0;
}