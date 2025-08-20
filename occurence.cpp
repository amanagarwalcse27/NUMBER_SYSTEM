#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1,3,10,2,10,3,3,2,2,2,3};
    int n = sizeof(a)/sizeof(a[0]);
    int ans = 0;
    
    for(int i = 0; i<n; i++)
    {
        ans = ans^a[i];
    }

    cout<<ans<<endl;

    return 0;
}