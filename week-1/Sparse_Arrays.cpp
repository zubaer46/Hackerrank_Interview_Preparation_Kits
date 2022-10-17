#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    vector<string> s, s1;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        s.push_back(x);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        string x;
        cin >> x;
        s1.push_back(x);
    }
    for (int i = 0; i < q; i++)
    {
        int c = 0;
        for (int j = 0; j < n; j++)
        {
            if (s1[i] == s[j])
            {
                c++;
            }
        }
        cout << c << endl;
    }

    return 0;
}