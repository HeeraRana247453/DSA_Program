// ARRAY:-
//========
// 1)An array in programming is a data structure that stores a fixed-size collection of elements of the same type.
// 2)These elements are stored in contiguous memory locations, allowing for efficient access and manipulation.
// 3)Arrays are commonly used for tasks such as storing lists of data, implementing matrices, and representing sequences of values. 
// 4)Accessing elements in an array typically involves using an index, which specifies the position of the desired element within the array.
// 5)Arrays are fundamental building blocks in most programming languages and are used extensively in various algorithms and applications.

// WAP to initialize all the values of the array with 1;
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[5];
    fill(arr,arr+5,1);
    // print
    int s = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<s; i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<"\n\n";
    return 0;
}