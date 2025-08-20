//shift opererator ka use

//left shift
 // a << b = a*2ki power b  = a * 2^b  
 //if a = 1 in above equation then 2^b ho jaayega which is very important in calculations

 //right shift
 // a >> b = a/2ki power b  = a / 2^b

 //TC = O(1) using these bitwise operators

 #include<bits/stdc++.h>
 using namespace std;

 int main()
 {
    int a,b;
    cin>>a>>b;

    int result1 = a << b; //left shift
    cout<<result1<<endl;

    int result2 = a >> b;
    cout<<result2<<endl;

    //power of 2
    int result3 = pow(2,5);
    cout<<result3<<endl;

    cout<< (1 << 5) <<endl;

    return 0;

 }