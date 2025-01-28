/* 
Greatest Comman Factor
========================
 */
#include<iostream>
#include<vector>
using namespace std;

int greatestCommonFactor(int num1,int num2)
{
    if(num1==0)
        return num2;
    else if(num2==0)
        return num1;
    while(num1!=num2)
    {
        if(num1>num2)
            num1=num1-num2;
        else
            num2=num2-num1;
    }
    return num1;  //you can also write num2, because at the end both will be equal
}

int main()
{
    int num1,num2;cout<<"\nEnter the two numbers: ";cin>>num1>>num2;

    int factor = greatestCommonFactor(num1,num2);
    cout<<"\nGreatest Common Factor is: "<<factor<<endl;
    return 0;
}