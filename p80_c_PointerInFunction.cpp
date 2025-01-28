/* 
Pointer pass by reference 
 */

#include<iostream>
using namespace std;

void update_1(int *ptr)  //it can update both address and value
{
    ptr = ptr + 1;      //independently it cann't update the ptr address
    *ptr = *ptr + 1;    //independently also it can update the value
}
void update_2(int &ptr)     
{
    ptr = ptr + 1;
    // *ptr = *ptr + 1;  //error
}

int getsum(int arr[],int n)
{
    int size=sizeof(arr);
    cout<<"\nsize: "<<size; //warning: it will give the size of pointer not the arr

    int sum=0;
    for(int i=0;i<n;i++)
        sum=sum + i[arr];   //implementation of arr[i] = *(arr+i)
    return sum;
}

int main()
{
    int value = 4;
    int *ptr = &value;

    cout<<"\nBefore update-1 ptr = "<<ptr;
    cout<<"\nBefore update-1 *ptr = "<<*ptr;
    update_1(ptr);
    cout<<"\nAfter update-1 ptr = "<<ptr;
    cout<<"\nAfter update-1 *ptr = "<<*ptr<<endl;

    cout<<"\nBefore update-2 ptr = "<<ptr;
    cout<<"\nBefore update-2 *ptr = "<<*ptr;
    update_2(*ptr);
    cout<<"\nAfter update-2 ptr = "<<ptr;
    cout<<"\nAfter update-2 *ptr = "<<*ptr<<endl;


    int arr[10]={1,2,3,4,5};

    int size = sizeof(arr);
    cout<<"\nSize of arr in main : "<<size<<endl;

// First way of passing the array
    int sum1 = getsum(arr, 10);
    cout<<"\nSum1 of arr is: "<<sum1<<endl;

// Second way of passing the array
    int sum2 = getsum(arr+3, 5);  //means we can pass the part of an array
    cout<<"\nSum2 of arr is: "<<sum2<<endl;

    return 0;
}