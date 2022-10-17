#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] == 'S' && (i + 1) % 3 == 1) || (s[i] == 'S' && (i + 1) % 3 == 0) || (s[i] == 'O' && (i + 1) % 3 == 2))
            continue;
        else
            c++;
    }
    cout<<c<<endl;
    return 0;
}