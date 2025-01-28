#include<iostream>
using namespace std;

int main () {

    int arr[10] = {23, 122, 41, 67};

   
    cout <<" address of first memory block is " << arr << endl;  //internally work as (&arr[0])
    cout << arr[0] << endl;
    cout <<" address of first memory block is " << &arr[0] << endl;

    cout << "4th " << *arr << endl;
    cout << "5th " << *arr + 1 << endl;
    cout << "6th " << *(arr + 1) << endl;
    cout << "7th " << *(arr) + 1 << endl;
    cout << "8th " << arr[2] << endl;
    cout << "9th " << *(arr+2) << endl;

    int i = 3;
    cout << i[arr] << endl;


   int temp[10] = {1,2};
   cout << sizeof(temp) << endl;
   cout << " 1st " <<  sizeof(*temp) << endl;
   cout << " 2nd " <<  sizeof(&temp) << endl;

   int *ptr = &temp[0];
   cout << sizeof(ptr) << endl ;
   cout << sizeof(*ptr) << endl ;
   cout << sizeof(&ptr) << endl ;



   int a[20] = {1,2,3,5};
   cout << "\nAddress of first element of a is &a[0] :" << &a[0] << endl;
  cout <<"Address of first element of a is &a : " << &a << endl;
   cout <<"Address of first element of a is a : "<< a << endl<<endl;

   int *p = &a[0];
   cout << p << endl;
   cout << *p << endl;
   cout << "-> " << &p << endl;  //This is the address of 'p' not the address of a[0];

   

   int arr[10];

//ERROR
   //arr = arr+1;

    int *ptr = &arr[0];
    cout << ptr << endl;  //Address of arr[0]
    ptr = ptr + 1;  //increment by the size of data type of pointer
    cout << ptr << endl;

    return  0;
}