//xor se swap

#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    a = a ^ b;
    b = b ^ a; //b = a
    a = a ^ b; //a = b

    cout<<"AFTER swapping "<<endl;
    cout<<"a:"<<a<<" "<<"b:"<<b<<endl;

}

int main()
{
    int a = 5;
    int b = 10;

    swap(a,b);

    return 0;
}