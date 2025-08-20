//one duplicate one missing

#include<bits/stdc++.h>
using namespace std;

// CPP code to find the repeated elements
// in the array where every other is present once
#include <iostream>
using namespace std;

// Function to find duplicate
int findDuplicate(int arr[] , int n)
{
    int answer=0;
      //XOR all the elements with 0
    for(int i=0; i<n; i++)
    {
       answer=answer^arr[i];
    }
      //XOR all the elements with no from 1 to n
      // i.e   answer^0 = answer
    for(int i=1; i<n; i++)
    {
       answer=answer^i;
    }
    return answer;
}

//Driver code
int main() 
{
    int arr[] = { 1, 3, 2, 1 };
      int n = sizeof(arr) / sizeof(arr[0]);
    cout << findDuplicate(arr,n);
    return 0;
}
