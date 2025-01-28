// Priority Queue- It can have two types of priority wheter maximum element store on the top or
// in minimum priority queue minimum element store on the top

#include<iostream>
#include<queue>
using namespace std;

int main()
{
    // max-heap  (default priority queue is max-heap)
    priority_queue<int> max;

    // min-heap
    priority_queue<int, vector<int>, greater<int>> min;

//Push Operation
    max.push(1);
    max.push(2);
    max.push(3);
    max.push(4);
    cout<<"\nsize: "<<max.size()<<endl;

//Travesing the priority Queue
    cout<<"\nPriority Queue: ";
    int s = max.size();
    for(int i=0;i<s;i++){
        cout<<max.top()<<" ";
        max.pop();}
    cout<<"\n";
 
    cout<<"\nIs priority queue empty: "<<max.empty()<<"\n";
    
    return 0;
}