/* WAP to implement the Binary Search using Recursion
   ---------------------------------------------------*/

#include<iostream>
using namespace std;


// First Approach (My Approach)
bool binarySearch_1(int *arr, int key, int size)
{
    int low = 0;
    int high = size-1;  
    int mid = low + (high-low)/2;//Processing

    if(size==0)  //base condition-1
        return false;
    
    if(arr[mid]==key)  //base condition-2
        return true;

    else if(arr[mid]<key)
        return binarySearch_1(arr+mid+1,key,size); //recursive relation
    else if(arr[mid]>key)
        return binarySearch_1(arr,key,mid);//recursive relation

    return false;
}
// Second Approach 
bool binarySearch_2(int *arr,int key,int s,int e)
{
    int mid = s + (e-s)/2;

    if(s>e)
        return false;
    
    else if(arr[mid]==key)
        return true;
    else if(arr[mid]>key)
        return binarySearch_2(arr,key,s,mid-1);
    else 
        return binarySearch_2(arr,key,mid+1,e);

    return false;
}

int main()
{

    // int arr[] = {};                       //Test case-1
    // int arr[] = {2};                      //Test case-2
    // int arr[] = {2,3};                    //Test case-3
    int arr[] = {2,3,4,5,6,7,8,8,9,10};   //Test case-4
    int key;
    cout<<"\nEnter the key to search : ";
    cin>>key;

    bool res1 = binarySearch_1(arr,key, sizeof(arr)/sizeof(arr[0]));
    if(res1)
        cout<<"\n"<<key<<" is present in the array\n";
    else
        cout<<"\n"<<key<<" is not present in the array\n";


    bool res2 = binarySearch_2(arr,key, 0,sizeof(arr)/sizeof(arr[0])-1);
    if(res2)
        cout<<"\n"<<key<<" is present in the array !!\n";
    else
        cout<<"\n"<<key<<" is not present in the array !!\n";


    return 0;
}