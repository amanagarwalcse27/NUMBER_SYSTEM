#include<bits/stdc++.h>
using namespace std;

// Function to convert a decimal number to binary number
vector<int> dec_To_Binary(int n)
{
    // Vector to store binary number
    vector<int> binarynum;

    // Loop until n becomes 0
    while (n > 0) 
    {
        // Storing remainder in vector
        binarynum.push_back(n % 2);
        n = n / 2;
    }

    // Reverse the vector to get the correct binary representation
    reverse(binarynum.begin(), binarynum.end());
    return binarynum;
}

//direct method using c++ stl
// Function to convert decimal numbers to binary using bitset class
bitset<32> dec_To_Binary_Bitset(int n)
{
    return bitset<32>(n);
}

// Driver code
int main()
{
    int n;
    cin >> n;

    // Convert decimal to binary using custom function
    vector<int> result = dec_To_Binary(n);
    cout << "Binary representation using custom function: ";
    for (int i : result)
    {
        cout << i;
    }
    cout << endl;

    // Convert decimal to binary using bitset class or direct stl conversion
    int m;
    cin >> m;
    bitset<32> binaryRepresentation = dec_To_Binary_Bitset(m);
    cout << "Binary representation using bitset class: " << binaryRepresentation << endl;

    return 0;
}
