#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    bool a = 0, A = 0, nm = 0, sp = 0;
    cin >> n >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            a = 1;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            A = 1;
        else if (s[i] - '0' >= 0 && s[i] - '0' <= 9)
            nm = 1;
        else
            sp = 1;
    }
    int c = 0;
    if (a == 0)
    {
        c++;
    }
    if (A == 0)
    {
        c++;
    }
    if (nm == 0)
    {
        c++;
    }
    if (sp == 0)
    {
        c++;
    }

    (n + c >= 6) ? cout << c << endl : cout << 6-n << endl;

    return 0;
}