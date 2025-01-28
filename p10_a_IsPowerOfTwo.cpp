// Second Approach
#include<iostream>
using namespace std;

bool isPowerOfTwo(int n)
{   
    int count=0;
    while(n)
    {
        if(n&1)
            count++;
        if(count>1)
            return false;
            
        n>>=1;
    }
    return true;
}

int main()
{
    int n;cout<<"Enter the Number: ";cin>>n;

    cout<<"The given number is power of Two: ";
    (isPowerOfTwo(n)) ? cout<<"True\n\n" : cout<<"False\n\n";
    
    return 0;
}