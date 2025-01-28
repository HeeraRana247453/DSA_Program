// Binary to Decimal

#include<iostream>
#include<math.h>
using namespace std;

int binaryToDecimal(int n){
    int digit;
    int value=0;
    int i=0;
    while(n>0){
        digit = n%10;
        n/=10;
        if(digit==1)
          value = value + (digit * pow(2,i));

        i++;
    }
    return value;
}

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"Decimal Value is: "<< binaryToDecimal(n)<<endl;
    return 0;
}
