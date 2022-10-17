#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        c=c^x;
    }
    cout<<c<<endl;
   
}