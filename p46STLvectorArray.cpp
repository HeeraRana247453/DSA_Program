#include<iostream>
#include<array>
#include<vector>


using namespace std;

int main()
{
//ARRAY
    int basic[3] = {1,2,3};

    array<int,4> arr={1,3,5,6}; //this is also a static array
    
    cout<<"\nSize of arr: "<<arr.size();
    cout<<"\nIs arr empty: "<<arr.empty();
    cout<<"\nvalue at arr[2]= "<<arr.at(2);
    cout<<"\nFront element is: "<<arr.front();
    cout<<"\nBack element is: "<<arr.back()<<"\n";

//Vector(Dynamic Array)
    vector<int> v1;
    cout<<"\ncapacity of v1: "<<v1.capacity()<<"\n";
    cout<<"size of v1: "<<v1.size()<<"\n";
    // Push Operation
    v1.push_back(1);
    cout<<"\ncapacity of v1: "<<v1.capacity()<<"\n";
    cout<<"size of v1: "<<v1.size()<<"\n";

    v1.push_back(2);
    cout<<"\ncapacity of v1: "<<v1.capacity()<<"\n";
    cout<<"size of v1: "<<v1.size()<<"\n";

    v1.push_back(5);
    cout<<"\ncapacity of v1: "<<v1.capacity()<<"\n";     
    cout<<"size of v1: "<<v1.size()<<"\n";

    v1.push_back(3);
    cout<<"\ncapacity of v1: "<<v1.capacity()<<"\n";     
    cout<<"size of v1: "<<v1.size()<<"\n";
    // Front and Back
    cout<<"\nfront element of v1: "<<v1.front();
    cout<<"\nback element of v1: "<<v1.back();
    //  POP Operation
    cout<<"\n\nBefore POP: ";
    for(auto value:v1)
        cout<<value<<" ";
    v1.pop_back();
    cout<<"\nAfter POP: ";
    for(auto value:v1)
        cout<<value<<" ";
    cout<<"\n";
    // Size vs Capacity
    cout<<"\ncapacity before clear: "<<v1.capacity();
    cout<<"\nsize before clear: "<<v1.size();
    v1.clear();
    cout<<"\ncapacity after clear: "<<v1.capacity();
    cout<<"\nsize after clear: "<<v1.size()<<"\n";
    // Initialize vector array
    vector<int> arr2(5,1);        //syntax: vector<datatype> vec_name(size,value)
    cout<<"\nwe initialize all value with 1 in arr: ";
    for(auto value:arr2)
        cout<<value<<" ";
    cout<<"\n"; 
    
    //Coping one vector array to another
    vector<int> arr3(arr2);
    cout<<"\narr2 is copied to arr3: ";
    for(auto value:arr2)
        cout<<value<<" ";
    cout<<"\n";
    return 0;
}