// Calculate the no. of set bits in numbers
#include<iostream>
using namespace std;

int bitCal(int a,int b){
    int count=0;
    int b1,b2;
    while(a>0){
        b1 = a&1;
        if(b1==1){
            count++;
        }
        a = a>>1;
    }
    while(b>0){
        b2 = b&1;
        if(b2==1){
            count++;
        }
        b = b>>1;
    }
    return count;
}

int main(){
    int a,b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;

    int res = bitCal(a,b);
    cout<<"Total No. of set bits of both the numbers are: "<<res<<endl;
    return 0;
}