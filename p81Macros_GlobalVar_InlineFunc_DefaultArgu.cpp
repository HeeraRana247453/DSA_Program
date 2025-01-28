#include<iostream>
using namespace std;

#define PI 3.14                     //Object-Like Macros

#define circleArea(r) (PI*r*r)      //Function-Like Macros
#define rectangleArea(l,b) (l*b) 
#define minimum(a,b) ((a<b) ? (a) : (b) )

#define Instagram Followers        //Chain Macros
#define Followers

//Multi-Line Macros
#define value 1,\
2,\
3,\
4,\
5 



int main()
{
    int r;
    cout<<"\nEnter the radius of circle: ";
    cin>>r;

    int area1 = circleArea(r);
    cout<<"\nArea of circle is : "<<area1<<endl;

    int l,b;cout<<"\nEnter the length and breath of rectanle: ";cin>>l>>b;

    int area2 = rectangleArea(l,b);
    cout<<"\nArea of rectangle is : "<<area2<<endl;


    int arr[] = {value};
    cout<<"\nvalues of array are : "<<endl;
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
        cout<<arr[i]<<" ";

    cout<<endl<<endl;
    

    return 0;
}


/* 
Global variable - can be acces throuhout the any function in the program
================
Alternative of Global variable is - Reference Variable

Try to avoid the global variable in the program, because it can be change by any function throughout the program
Try to use the reference varible which also have same memory location with different names.


Inline function - are used to reduce the function calls overhead
================


 */