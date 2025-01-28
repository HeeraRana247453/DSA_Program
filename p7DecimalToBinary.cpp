// Decimal to Binary(only working for positive no.)

#include<iostream>
#include<math.h>
#include<list>
using namespace std;

void display(list<int> &l1)
{
    list<int>::iterator itr;
    for(itr=l1.begin();itr!=l1.end();itr++)
        cout<<*itr;
}

int decimalToBinary(int n){ 
        int digit;
        int binaryNum=0;
        int i=0;   
    if(n>=0){//Positive Number
        while(n>0){
            digit = n&1;
            binaryNum = binaryNum + (digit * pow(10,i));  //important
            n = n>>1;
            i++;
        }
        return binaryNum;
    }
    else{//Negative Number
        list<int> l1;
        for(int i=0; i<32; i++){
            digit = n&1;            
            l1.push_front(digit);

            // binaryNum = binaryNum + (digit * pow(10,i));   //Not need of this, because we directly store in the list

            n = n>>1;
        }
        cout<<"Binary value of "<<n<<" is : ";
        display(l1);
        cout<<"\n\n";
        exit(0);
    }
}

int main(){
    int n;
    cout<<"Enter the Decimal No.: ";
    cin>>n;

    int binValue = decimalToBinary(n);
    cout<<"Binary Value of "<<n<<" is "<<binValue<<"\n";
    return 0;
}
