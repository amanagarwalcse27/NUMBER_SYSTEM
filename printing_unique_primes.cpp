#include<bits/stdc++.h>
using namespace std;

vector<int> primeFac(int n) 
{
     vector<int> ans;
        
    if(n < 2) return ans;
        
        
    for(int i = 2 ; i*i <= n;i++)
    {
        while(n % i == 0)
            {
               if(ans.empty() || ans.back() != i)
                {
                ans.push_back(i);
                }
                n = n/i;
            }
    }
        
    if(n > 1) ans.push_back(n);
        
    return ans;
}

int main()
{
    
}