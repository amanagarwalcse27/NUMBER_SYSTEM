//convert to binary using shift operators

#include <bits/stdc++.h>
using namespace std;

void printbinary(int num)
{
    for(int i = 10;i>=0;--i)
    {
        cout<<((num >> i) & 1);

    }
    cout<<endl;

}

int main()
{
    printbinary(10);

    return 0;
}

