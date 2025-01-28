/*  WAP to print the digits of a number in English Words
    -----------------------------------------------------*/

#include<iostream>
using namespace std;
#include<map>

void sayDigits(int num)
{
    map<int,string> m = {{0,"zero"},{1,"one"},{2,"two"},{3,"three"},{4,"four"},{5,"five"},{6,"six"},{7,"seven"},{8,"eight"},{9,"nine"}};
    
    if(num==0)  //base condition
        return ;

    int digit = num%10;  //calculation
    num=num/10;

    sayDigits(num); //recursive relation

    cout<<m[digit]<<" ";  //First evaluate then print, so that we can print last digit in the last, otherwise it will print last digit in first
}

int main()
{
    int num;
    cout<<"\nEnter the number: ";
    cin>>num;
    sayDigits(num);
    cout<<"\n\n";

    return 0;
}