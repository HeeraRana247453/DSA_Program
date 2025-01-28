/* 
Modular Exponentiation
=======================
Problem statement
            You are given a three integers 'X', 'N', and 'M'. Your task is to find ('X' ^ 'N') % 'M'.
             A ^ B is defined as A raised to power B and A % C is the remainder when A is divided by C.
 */
#include<iostream>
using namespace std;

int moduloExponent(int num,int p,int m=1000000007)
{
    int res=1;
    while(p>0)
    {
        if(p&1)//if power is odd
            res = (1ll*(res%m) * (num%m)) % m;
        
        num = ((num%m) * (num%m)) % m; //if power is even or odd
        p = p>>1; //divide by 2
    }
    return res;
}

int main()
{
    int num;cout<<"\nEnter the base: ";cin>>num;
    int p;cout<<"\nEnter the power: ";cin>>p;

    int res = moduloExponent(num,p);

    cout<<"\nResult is: "<<res<<endl;
    return 0;
}

/* 
Home work
----------
1)Pigen hole
2)Catalon numbers (will study in binary tree)
3)Inclusion-Exculsion Numbers
4)Factorial Modulo
 */