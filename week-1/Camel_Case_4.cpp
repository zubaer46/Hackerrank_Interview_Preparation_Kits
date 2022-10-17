#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (getline(cin, s))
    {
        int n = s.size();

        if (s[0] == 'S')
        {
            if (s[2] == 'M' || s[2] == 'V')
            {
                for (int i = 4; i < n; i++)
                {
                    if (s[i] >= 'A' && s[i] <= 'Z')
                    {
                        cout << " ";
                        char c = (s[i] - 'A') + 'a';
                        cout << c;
                    }
                    else if (s[i] >= 'a' && s[i] <= 'z')
                        cout << s[i];
                }
                // cout << '\n';
            }
            else if (s[2] == 'C')
            {
                char c = (s[4] - 'A') + 'a';
                cout << c;
                for (int i = 5; i < n; i++)
                {
                    if (s[i] >= 'A' && s[i] <= 'Z')
                    {
                        cout << " ";
                        char c = (s[i] - 'A') + 'a';
                        cout << c;
                    }
                    else if (s[i] >= 'a' && s[i] <= 'z')
                        cout << s[i];
                }
                // cout << '\n';
            }
        }
        if (s[0] == 'C')
        {
            if (s[2] == 'M')
            {
                for (int i = 4; i < n; i++)
                {
                    if (s[i] >= 'a' && s[i] <= 'z')
                    {
                        cout << s[i];
                    }
                    else if (s[i] == ' ')
                    {

                        char c = (s[i + 1] - 'a') + 'A';
                        cout << c;
                        i++;
                    }
                }
                cout << "()";
            }
            else if (s[2] == 'C')
            {
                char c = (s[4] - 'a') + 'A';
                cout << c;
                for (int i = 5; i < n; i++)
                {
                    if (s[i] >= 'a' && s[i] <= 'z')
                    {
                        cout << s[i];
                    }
                    else if (s[i] == ' ')
                    {

                        char c = (s[i + 1] - 'a') + 'A';
                        cout << c;
                        i++;
                    }
                    else
                        cout << s[i];
                }
                // cout << '\n';
            }
            else
            {
                for (int i = 4; i < n; i++)
                {
                    if (s[i] >= 'a' && s[i] <= 'z')
                    {
                        cout << s[i];
                    }
                    else if (s[i] == ' ')
                    {

                        char c = (s[i + 1] - 'a') + 'A';
                        cout << c;
                        i++;
                    }
                    else
                        cout << s[i];
                }
                // cout << '\n';
            }
        }
        cout << endl;
    }

    // return 0;
}