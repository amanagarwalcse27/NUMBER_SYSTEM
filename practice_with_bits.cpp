#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , k;
    cin>>n;

    for(int k = 0;k < 5;k++)
    {
    cout<<((  n & (1 << k)))<<endl;  //left shift 
    }

    return 0;
}