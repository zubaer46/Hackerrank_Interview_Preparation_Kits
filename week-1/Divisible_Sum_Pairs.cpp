#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,c=0;  
    cin >> n >> k ;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i] ;
    }
    for(i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
          if((a[i]+a[j])%k==0)
          {
            c++;
          }
        }
    }
    cout<<c<<endl;
    return 0;
}