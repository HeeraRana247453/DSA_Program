#include<iostream>
using namespace std;

template<typename T1>
T1 minimum(T1 arr[],int s)
{
    T1 min = arr[0];
    for(int i=0;i<s;i++)
    {
        if(min>arr[i])
            min=arr[i];
    }
    return min;
}

template<typename T2>
T2 maximum(T2 arr[],int s)
{
    T2 max = arr[0];
    for(int i=0;i<s;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    return max;
}

int main()
{
    // int arr[100];
    double arr[100];
    // char arr[100];
    int size;cout<<"\nEnter the size of array: ";cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"\narr["<<i<<"]=";cin>>arr[i];
    }

    cout<<"\nMinimum value of array is: "<<minimum(arr,size);
    cout<<"\nMaximum value of array is: "<<maximum(arr,size)<<endl;
    return 0;
}