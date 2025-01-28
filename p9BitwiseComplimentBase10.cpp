// Bitwise compliment of base 10 integer


#include<iostream>
using namespace std;

int bitwiseComplement(int n);

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    cout<<"value: "<<bitwiseComplement(n);

    return 0;
}

int bitwiseComplement(int n) {
        int num = n;
        int mask = 0;
        // edge case
        if(n==0){
            return 1;
        }
        while(num>0){
            mask = (mask<<1) | 1;  // 0|1 -> 10|1 -> 110|1 -> 1110|1 ->1111
            num = num>>1;
        }
        n=(~n) & mask;
        return n;
    }

/* The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

    For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.

Given an integer n, return its complement. */