#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n;
    cin >> n;
    for (i = 1; i < n+1; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            cout << "FizzBuzz" << endl;
        else if (i % 3 == 0)
        {
            cout << "Fizz" << endl;
        }
        else if (i % 5 == 0)
        {
            cout << "Buzz" << endl;
        }
        else
            cout << i << endl;
    }
    return 0;
}