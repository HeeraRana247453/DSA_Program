/* 
This is the pointer Array
 */

#include<iostream>
using namespace std;

int main()
{

    // All three behaves differently
    int arr[10] = {1,2,3,4,5};
    char ch[10] = "abcde";
    // char *ch1 = "abcde";  //Don't try to do this is risky
    char ch2 = 'A';

    cout<<"\n arr = "<<arr;
    cout<<"\n ch = "<<ch;
    cout<<"\n ch2 = "<<ch2<<endl;

    int *ptr1 = &arr[0];
    char *ptr2 = &ch[0];
    char *ptr3 = &ch2;

    cout<<"\n ptr1 = "<<ptr1;
    cout<<"\n ptr2 = "<<ptr2;
    cout<<"\n ptr3 = "<<ptr3;
    cout<<"\n *ptr1 = "<<*ptr1;
    cout<<"\n *ptr2 = "<<*ptr2;
    cout<<"\n *ptr3 = "<<*ptr3<<endl;


    
    return 0;
}