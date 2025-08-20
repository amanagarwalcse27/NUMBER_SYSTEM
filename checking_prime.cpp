#include<bits/stdc++.h>
using namespace std;

//in O(n) time complexity
bool isprime(int n)
{
    int count = 0;
    for(int i = 2; i < n;i++)
    {
        if(n % i == 0) count++;
    }
    
    return count == 0;
}

//in O(sqrt n) TC
bool is_prime(int n)
{
    int count = 0;
    for(int i = 2; i*i < n;i++)
    {
        if(n % i == 0) count++;
    }

    return count == 0;
}