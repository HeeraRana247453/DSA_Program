/* 
WAP to reverse a string
*/

#include<iostream>
#include<vector>
using namespace std;

// First Approach
void reverse_1(string &str,int i,int j) //use the reference variable
{
    if(i>j)
        return;
    swap(str[i],str[j]);
    reverse_1(str,i+1,j-1);
}

// Second Approach(using single pointer)
void reverse_2(string &str,int i)
{
    int s = str.size()-1;
    if(i>s-i)  //base case
        return;

    swap(str[i],str[s-i]);//Processing

    reverse_2(str,i+1);//recursive relation
}
int main()
{
    string str1;
    cout<<"\nEnter the string: ";
    getline(cin,str1);
    
    cout<<"\nBefore reverse: "<<str1;
    int n = str1.size();
    reverse_1(str1,0,n-1);
    cout<<"\nAfter reverse: "<<str1<<endl;


    string str2;
    cout<<"\nEnter the string: ";
    getline(cin,str2);

    cout<<"\nBefore: "<<str2;
    reverse_2(str2,0);
    cout<<"\nAfter: "<<str2<<endl;
    return 0;
}