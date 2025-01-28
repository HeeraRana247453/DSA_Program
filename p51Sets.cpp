//Sets:- It stores the unique elements, means if we store an element multiple time then it only be store by one time
//It implements internally using BST.
//After putting the element in the sets we cann't modified it, we can only insert and delete
// Travesing of set is always in sorted order
// There are two types of set:-
//    1) Ordered set- traversing in sorted order, Slower
//    2) Unordered set- traversing in random order, Faster

#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;
//Insert Operation
    s.insert(1); 
    s.insert(2);
    s.insert(3);
    s.insert(3); //(complexity of insert operation is O(log n))
    s.insert(3);  
    s.insert(4);
    s.insert(5);
    s.insert(6);

    cout<<"\nSet: ";
    for(auto value:s)
        cout<<value<<" ";
    cout<<"\n";

//Erase function
    set<int>::iterator itr=s.begin();
    itr++;
    s.erase(++itr); //it will erase the third element

    cout<<"\nSet: ";
    for(auto value:s)
        cout<<value<<" ";
    cout<<"\n";

// Count function
    cout<<"\n5 is present or not ?: "<<s.count(4)<<endl;

// Find function
    set<int>::iterator it = s.find(4);
    cout<<"value present at itrator is : "<<*it<<endl;
    cout<<"\nSet from 4 is:- ";
    for(auto iter=it;iter!=s.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<"\n";

    return 0;
}