#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,v1,v2;
    cin >> x1 >> v1 >> x2 >> v2;
   while(true)
   {
    if(x1 == x2)
    {
        cout<<"YES"<<endl;
        break;
    }
    x1+=v1;
    x2+=v2;
    if((x1>x2&&v1>=v2)||(x1<x2&&v1<=v2))
    {
        cout<<"NO"<<endl;
        break;
    }
   }
    return 0;
}