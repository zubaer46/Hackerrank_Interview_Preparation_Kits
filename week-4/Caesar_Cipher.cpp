#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n;
    string s;
    cin >> n >> s >> k;
    k = k % 26;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            int x = s[i];
            char c;
            if (x + k > 122)
            {
                c = s[i] + k - 26;
            }
            else
                c = s[i] + k;

            cout << c;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            int x = s[i];
            char c;
            if (x + k > 90)
            {
                c = s[i] + k - 26;
            }
            else
                c = s[i] + k;

            cout << c;
        }
        else
            cout << s[i];
    }
    return 0;
}