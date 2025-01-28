#include<iostream>
using namespace std;

int arraySum(int arr[], int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
        sum = sum + arr[i];
    
    return sum;
}

int main()
{
    int n;cout<<"\nEnter the size of array: ";cin>>n;

    // int arr[n];  //This is bad practise, because it can lead to crash the program, because may the predefined allocated stack memory is smaller than 'n'

    int *arr = new int[n];  //this is the good practise to allocate the memory during runtime, because by new keyword heap memory is allocated which is Dynamic memory

    cout<<"\nEnter the elements in the array: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int sum = arraySum(arr,n);
    cout<<"\nSum of complete array is : "<<sum<<endl;

    return 0;
}

/* 
Difference between the static and Dynamic memory Allocation in Array
-----------------------------------------------------------------------
|                     |                                               |
| int arr[20];        |        int *arr = new int[20];                |
|                     |                                               |
| size = 4x20         |        size = 8 + (4x20)                      |
|      = 80           |             = 8 + 80                          |
|                     |             = 88                              |
-----------------------------------------------------------------------


Case-1
        while(true)         
        {
            int i=5;        //This is not dangerous, because automatic deallocation of memory of variable is happening when one iteration is complete
        }

Case-2
        while(true)
        {
            int *arr = new int;     //This is dangerous, because it is not deleting memory but accumulating in the heap on each iteration
        }                           //We have to delete the memory manually


Deallocation
---------------
int *var = new int;
delete var;   to delete the single integer from the HEAP

delete []arr;  to delete the complete array from the HEAP

 */