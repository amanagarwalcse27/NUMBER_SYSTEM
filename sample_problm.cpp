//to find duplicate in given continuous range

#include<bits/stdc++.h>
using namespace std;


//for large range don't use for loop instead use direct for loop 
int  main()
{
    int a[8]={601,602,603,604,605,605,606,607};
    int n = sizeof(a)/sizeof(a[0]);

    int ans1 = 0;
    int ans2 = 0;
    for(int i = 601;i<=607;i++) //601 ^ 602 ^ 603 ^ 604 ^ 605 ^ 606 ^ 607
    {
        ans1 = ans1 ^ i;
        
    }
    
    for(int i = 0;i<n;i++)  //601 ^ 602 ^ 603 ^ 604 ^ 605 ^ 605 ^ 606 ^ 607
    {
        ans2 = ans2 ^ a[i];
    }

    int result = ans1 ^ ans2;
    cout<<result<<endl;

    
    return 0;
}