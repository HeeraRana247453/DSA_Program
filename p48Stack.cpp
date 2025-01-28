
#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main()
{
//Stack follows LIFO
    stack<string> str;
    str.push("one");
    str.push("two");
    str.push("three");
    str.push("four");
    str.push("five");

    cout<<"\nTop element: "<<str.top();
    str.pop();//It will remove the last element from the stack
    cout<<"\nAfter pop top element: "<<str.top()<<"\n";

    cout<<"\nsize of stack: "<<str.size();
    cout<<"\nis str empty: "<<str.empty()<<"\n";

    cout<<"\nStack:- \n";
    stack<string> str2=str;
    while(!str2.empty())
    {
        cout<<str2.top()<<endl;
        str2.pop();
    }
    cout<<"\n";

    return 0;
}