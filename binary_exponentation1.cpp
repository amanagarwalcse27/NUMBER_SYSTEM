//recursive way to find large powers of a number as pow(a,b) gives result in double so not to use it

#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int binary_exponentiation(int a, int b) 
{
    //base case 
    if (b == 0) return 1;
    
    //to hold the function call 
    long long half = binary_exponentiation(a, b / 2);
    
    //if even power
    long long result = (half * half) % MOD;

    if (b % 2 == 1)  //odd powers ke liye 
    {
        result = (result * a) % MOD;
    }

    return result;
}
