#include <bits/stdc++.h>
using namespace std;
int a[26];
int main()
{
    int n;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
            continue;
        else if (s[i] >= 'a' && s[i] <= 'z')
            a[s[i] - 'a'] = 1;
        else
            a[s[i] - 'A'] = 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (a[i] == 0)
        {
            cout << "not pangram" << endl;
            return 0;
        }
    }
    cout << "pangram" << endl;
    return 0;
}