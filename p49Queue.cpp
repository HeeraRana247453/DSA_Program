// Queue:- Queue follows the FIFO rule, it allow pushing of element from the back and
// poping of element from the front.

#include<iostream>
#include<queue>
using namespace std;

int main()
{
//Queue follows FIFO
    queue<string> q1;
    q1.push("one");
    q1.push("two");
    q1.push("three");
    q1.push("four");
    q1.push("five");

    queue<string> q2(q1); //queue1 is copied to queue2  (for preserving q1)
    queue<string> q3(q1); //queue1 is copied to queue3

    int s = q2.size();
    cout<<"\nQueue2: ";
    for(int i=0;i<s;i++){
        cout<<q2.front()<<" ";
        q2.pop();}
    cout<<"\n";

    cout<<"\nQueue3: ";
    while(!q3.empty())
    {
        cout<<q3.front()<<",";
        q3.pop();
    }
    cout<<"\n";

    cout<<"\nSize of queue before pop: "<<q1.size();
    cout<<"\nFirst element of queue: "<<q1.front();
    cout<<"\nback element of queue: "<<q1.back();
    q1.pop();//it will always remove the front element from the Queue
    cout<<"\nafter pop from front";
    cout<<"\nfirst element of queue: "<<q1.front();
    cout<<"\nback element of queue: "<<q1.back();
    cout<<"\nSize of queue after pop: "<<q1.size()<<"\n";

    return 0;
}