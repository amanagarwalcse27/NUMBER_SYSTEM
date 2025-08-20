#include<bits/stdc++.h>
using namespace std;

//recursive function to find gcd
int gcd(int a, int b)
{
    //base case
    if( b == 0) return a;

    return gcd(b,a % b);
}

int main()
{
    int a,b;
    cin>>a>>b;

    int result = gcd(a,b);
    cout<<result<<endl;

    //direct function to find gcd
    cout<<__gcd(a,b)<<endl;

    return 0;


}