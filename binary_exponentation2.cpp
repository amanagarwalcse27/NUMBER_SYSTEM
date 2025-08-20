//iterative way 
#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int binary_exponentiation(int a, int b) 
{
    long long result = 1;
    long long base = a % MOD;

    while (b > 0) 
    {
        if (b % 2 == 1)  //take only when bit is set only that is 1 
            result = (result * base) % MOD;

        base = (base * base) % MOD;
        b /= 2;
    }

    return result;
}
