
#include<iostream>
#include<map>
using namespace std;

// All the operation in this map has complexity O(log n), because this is ordered map having implimentation using Red-Black Tree or Balanced Tree

// Unordered map has the implementation using the Hash Table, in which time complexity is O(1);

int main()
{
    map<string,int> m;
    m["person1"]=23;    
    m["person2"]=32;
    m["person3"]=54;
    m["person4"]=34;

//Insert operation
    m.insert({"person5",94});

//travesing
    for(auto value:m)
        cout<<"\nkey: "<<value.first<<", value: "<<value.second;
    cout<<"\n\n";

// count function
    cout<<"\nIs 'person3' present? : "<<m.count("person3");

// Erasing 
    m.erase("person3");
    cout<<"\nAfter Erasing:-";
    for(auto value:m)
        cout<<"\nkey: "<<value.first<<", value: "<<value.second;
    cout<<"\n\n";

// we can also access using iterator
    cout<<"\nAccessing using the iterator: ";
    for(auto itr=m.begin();itr!=m.end();itr++)
        cout<<"\nkey: "<<(*itr).first<<", value: "<<(*itr).second;
    cout<<"\n\n";
    
    return 0;
}