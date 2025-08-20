//we have to find all prime numbers till n in
#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10; 
vector<bool> isprime(N,1);

void prime(int n)
{
    isprime[0] = isprime[1] = 0;  //0 and 1 are not primes

    for(int i = 2; i*i< N;i++)  //i toh prime btayega for more optimize code use i*i < n
    {
        if(isprime[i] == 1)  
        {
            for(int j = 2*i; j < N;j = j+ i)  //j se i ke saare multiples false krenge    
            {
                isprime[j] = 0;
            }

        }
    }
   
    //now printing primes 
    for(int i = 0; i < n;i++)
    {
        if(isprime[i])
        {
            cout<<i<<" ";
        }
    }

}

int main()
{
    int n;
    cin>>n;
    
    prime(n);
    
    return n;
}