/* 186.Reverse Words in a String II
=====================================
Given a character array , reverse the order of the words.
A word is defined as a sequence of non-space characters.The words in s will be seperated by single space.
Your code must solve the problem in-place, i.e. without allocating extra space.
 */

//Approach- 1)First Reverse the whole string
//          2)then, Reverse word by word

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reverse(vector<char> &s,int i,int j)
{
    while(i<=j)
        swap(s[i++],s[j--]);
}
void reverseWord(vector<char> &s)
{
    int i=0;
    int j=s.size()-1;
    reverse(s,i,j);  //we can also use reverse(s.begin(),s.end()); or reverse(s.begin()+i,s.begin()+j+1);

    int a=0,b;
    while(i<=j)
    {
        if(s[i]==' ' || i==j)
        {
            if(i==j)
                b=i;
            else
                b=i-1;
            reverse(s,a,b);  //we can also use reverse(s.begin()+a, s.begin()+b+1;)
            a=i+1;
        }
        i++;
    }
}

void display(vector<char> str)
{
    for(auto ch:str)
        cout<<ch<<" ";
}

int main()
{
    vector<char> str = {'t','h','e',' ','s','k','y',' ','i','s',' ','b','l','u','e'};

    cout<<"\nGiven string is: ";
    display(str);
    cout<<"\n";

    reverseWord(str);
    cout<<"\nReverse Words: ";
    display(str);
    cout<<"\n\n";

    return 0;
}