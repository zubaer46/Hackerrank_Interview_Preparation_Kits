// #include <bits/stdc++.h>
// using namespace std;
// int factorNum(int n)
// {
//     set<int> s;
//     s.insert(n);

//     for (int i = 1; i <= n / 2; i++)
//     {
//         if (n % i == 0)
//             s.insert(i);
//     }
//     return s.size();
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         (factorNum(n) % 2 == 1) ? cout << "YES" << endl : cout << "NO" << endl;
//     }
//     return 0;
// }
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool is_smart_number(int num)
{
    int val = (int)sqrt(num);
    if (num / val == val)
        return true;
    return false;
}

int main()
{

    int test_cases;
    cin >> test_cases;
    int num;
    for (int i = 0; i < test_cases; i++)
    {
        cin >> num;
        bool ans = is_smart_number(num);
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
