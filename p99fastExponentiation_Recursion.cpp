/* 
WAP to find the exponentiation of the given value
*/
#include<iostream>
using namespace std;

int exponent(int b,int p,int res,int m=1000000007)
{
    if(p<1)
        return res;
    
    if(p&1)
        res = (1ll * (res%m) * (b%m) )%m;
    b = ((b)%m * (b)%m)%m;
    p=p>>1;
    
    return exponent(b,p,res);
}
int main()
{
    int base;
    cout<<"\nEnter the base value: ";cin>>base;
    int power;
    cout<<"\nEnter the power value: ";cin>>power;

    int res = exponent(base,power,1);
    cout<<"\nResult: "<<res<<endl;

    return 0;
}