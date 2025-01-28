// deque and list operation

#include<iostream>
#include<deque>
#include<list>
using namespace std;

int main()
{
    deque<int> d1;
    //push operation
    cout<<"\nIs d1 empty: "<<d1.empty();
    d1.push_back(1);
    d1.push_front(2);
    d1.push_back(3);
    cout<<"\nAfter pushing element";
    cout<<"\nIs d1 empty: "<<d1.empty()<<"\n";

    // front and back access
    cout<<"\nfront element: "<<d1.front();
    cout<<"\nsecond element: "<<d1.at(1);
    cout<<"\nback element: "<<d1.back()<<"\n";

    //Erase operation
    cout<<"\nbefore erase: "<<d1.size();
    d1.erase(d1.begin(),d1.begin()+1);    //complexity is O(n)
    cout<<"\nafter erase: "<<d1.size()<<"\n";

    // Direct Access is not possible
    list<int> l1;
    //push operation
    cout<<"\nIs l1 empty: "<<l1.empty();
    l1.push_back(1);
    l1.push_front(2);
    l1.push_back(3);
    cout<<"\nAfter pushing operation";
    cout<<"\nIs l1 empty: "<<l1.empty()<<"\n";

    cout<<"\nbefore erase: "<<l1.size();
    l1.erase(l1.begin());       //complexity is O(n)
    cout<<"\nafter erase: "<<l1.size()<<"\n";

    //Initialization of list
    list<int> l2(5,100);
    cout<<"\nlist after initialization: ";
    for(int value:l2)
        cout<<value<<" ";
    

    return 0;
}