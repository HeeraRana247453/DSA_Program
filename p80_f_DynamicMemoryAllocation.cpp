#include<iostream>
using namespace std;

int main()
{
    char ch = 'D'; // size of ch = 1byte
    char *ptr = &ch; //size of ptr = 8byte

    char *ptr2 = new char;  //size of ptr2 is 8byte in STACK and size of char in HEAP is 1byte   (STACK- is a static memory, HEAP- is a dynamic memory)

    cout<<"\nsize of ch : "<<sizeof(ch);
    cout<<"\nsize of ptr: "<<sizeof(ptr);
    cout<<"\nsize of ptr2: "<<sizeof(ptr2);  //it will print only the size of ptr2 in STACK
    cout<<"\nsize of *ptr2: "<<sizeof(*ptr2)<<endl;  //it will print only the size of *ptr2 in the HEAP

    return 0;
}