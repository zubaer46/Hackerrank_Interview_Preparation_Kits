#include <bits/stdc++.h>
using namespace std;

string grid(vector<string> s)
{
    for (int i = 0; i < s.size(); i++)
    {
        sort(s[i].begin(), s[i].end());
    }
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s[0].size() - 1; j++)
        {
            if (s[j][i] > s[j + 1][i])
                return "NO";
        }
    }
    return "YES";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> s(n);
        for (int i = 0; i < n; i++)
        {
            string z;
            cin >> z;
            s[i] = z;
        }

        cout << grid(s) << endl;
    }
    return 0;
}