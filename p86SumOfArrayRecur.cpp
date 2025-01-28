/*Calculate the sum of array using the recursion
  -----------------------------------------------*/

#include<iostream>
using namespace std;

//First Approach
int arraySum_1(int arr[],int size)
{
    if(size==0) //base condition
        return 0;

    return arr[size-1] + arraySum_1(arr,size-1);//recursive relation
}

//Second Approach
int arraySum_2(int arr[],int size)
{
    if(size==0) //base condition
        return 0;

    return arr[0] + arraySum_2(arr+1,size-1);//recursive relation
}

int main()
{
    int arr[5] = {1,2,3,4,5};

    int sum = arraySum_2(arr, sizeof(arr)/sizeof(arr[0]));

    cout<<"\nSum of array is : "<<sum <<endl;

    return 0;
}