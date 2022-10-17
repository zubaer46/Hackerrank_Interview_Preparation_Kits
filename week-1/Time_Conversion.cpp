#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i;
    cin >> s;

    int hh = (s[0] - '0') * 10 + (s[1] - '0');

    if (hh < 12 && s[8] == 'P')
        cout << hh + 12 << ":" << (s[3] - '0') << (s[4] - '0') << ":" << (s[6] - '0') << (s[7] - '0') << endl;
    else if (hh == 12 && s[8] == 'A')
        cout << "00"
             << ":" << (s[3] - '0') << (s[4] - '0') << ":" << (s[6] - '0') << (s[7] - '0') << endl;

    else
    {

        if (hh < 10)
            cout << 0;
        cout << hh
             << ":" << (s[3] - '0') << (s[4] - '0') << ":" << (s[6] - '0') << (s[7] - '0') << endl;
    }

    return 0;
}