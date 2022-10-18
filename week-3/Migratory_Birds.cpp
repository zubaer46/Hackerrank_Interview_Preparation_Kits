#include <bits/stdc++.h>
using namespace std;
int ar[6];
int main()
{
    int n,ans=6,mx=0;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        ar[a[i]]++;
        if (ar[a[i]] > mx || (ar[a[i]] == mx&&a[i]<ans))
        {
            
          ans=a[i];
          mx=ar[a[i]];
            
        }
    }
    cout<<ans<<endl;
    
    return 0;
}