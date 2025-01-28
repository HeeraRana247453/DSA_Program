/* 
Factorial Modulo
-----------------
 */

#include<iostream>
using namespace std;

int factorial(int n,int m = 1000000007)
{
    int fact = 1;
    while(n>0)
    {
        fact = (fact*n)%m;
        n--;
    }
    return fact;
}

int main()
{
    int n;cout<<"\nEnter the number: ";cin>>n;
    
    int res = factorial(n);
    cout<<"\nFactorial : "<<res<<endl;

    return 0;
}