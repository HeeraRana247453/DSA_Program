/* 1047. Remove All Adjacent Duplicates In String
==================================================
You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.
We repeatedly make duplicate removals on s until we no longer can.
Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.
 */
#include<iostream>
using namespace std;

void removeAdjacentDuplicate(string &str)
{
    int i=0;
    while(i<str.size())
    {
        if(i+1< str.size() && str[i]==str[i+1]){
            str.erase(i,2);
            cout<<"str1: "<<str<<"  i="<<i<<endl;
        }
        else if(i-1>=0 && str[i-1]==str[i]){
            str.erase(i-1,2);
            i--;
            cout<<"str2: "<<str<<"  i="<<i<<endl;
        }        
        else{
             i++;
             cout<<"increment"<<"  i="<<i<<endl;
        }
    }
}

int main()
{
    // string str = "daabcbaabcbc";
    string str = "abbaca";

    cout<<"\nOriginal string: "<<str<<endl;
    removeAdjacentDuplicate(str);
    cout<<"\nAfter removing all the adjacent duplicates: "<<str<<endl;

    return 0;
}