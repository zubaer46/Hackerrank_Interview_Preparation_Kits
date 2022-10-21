#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        if (s.size() % 2 == 1)
            cout << -1 << endl;
        else
        {
            int n = s.size() / 2;
            vector<char> a, b;
            int z[26] = {0};
            int c = 0;
            for (int i = 0; i < n; i++)
            {
                a.push_back(s[i]);
                int x = s[i] - 97;
                z[x]++;
            }

            for (int i = n; i < 2 * n; i++)
            {
                b.push_back(s[i]);
                int x = s[i] - 97;
                if (z[x] != 0)
                {
                    z[x]--;
                }
            }

            for (int i = 0; i < 26; i++)
            {
                
                if (z[i] != 0)
                {
                    c += z[i];
                }
            }
            cout << c << endl;
        }
    }
    return 0;
}