#include <bits/stdc++.h>
using namespace std;
int ar[101];
int main()
{
    int n,c=0;
   
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ar[a[i]]++;
    }
    for(int i = 0; i < 101; i++)
    {
       
       c+= ar[i]/2;
    }
    cout<<c<<endl;


    return 0;
}