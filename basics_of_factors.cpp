#include<bits/stdc++.h>
using namespace std;

//in O(n) time complexity
void divisors(int n)
{
    int count = 0;
    int sum = 0;

    for(int i = 1; i < n;i++)
    {
        if(n % i == 0)
        {
            count++;
            sum += i;
            cout<<i<<" ";
        }
    }
    cout<<endl;
    cout<<"Total divisors  "<< count << " sum " <<sum<<endl;
}

//in O(sqrt n) complexity

void divisors(int n)
{
    int count = 0;  //total factors
    int sum = 0;  //finding sum of factors

    for(int i = 1; i*i <= n;i++)
    {
        if(n % i == 0)
        {
            if(i != n/i)
            {
            cout<<i<<" "<<n/i<<endl;
            count += 2;
            sum = sum + i + n/i;
            }
            
            else 
            {
                cout<<i<<" "<<n/i<<endl;
                count += 1;
                sum = sum + i;
            }
        }
    }

    cout<<"Total divisors  "<< count << " sum " <<sum<<endl;
}

int main()
{
    int n;
    cin>>n;
     
    divisors(n);
    divisors1(n);

    return 0;
}