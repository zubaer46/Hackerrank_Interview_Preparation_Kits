#include <bits/stdc++.h>
using namespace std;
int arr[100];
int main()
{
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[x]++;
    }
    for (i = 0; i < 100; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}