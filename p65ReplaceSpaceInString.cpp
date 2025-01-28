// Replace all the space in the string with '@40'
#include<iostream>
using namespace std;

//First Approach (Using extra memory)
void replace_1(string &str)
{   
    string temp;
    for(char i=0;i<str.size();i++)
    {
        if(str[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');}
        else
            temp.push_back(str[i]);
    }
    str=temp;
}

//Second Approach (without using extra memory)
void replaceSecond(string &str)
{
    int spaceCount=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==' ')
            spaceCount++;
    } 
    int extraSpace=2*spaceCount;
    int newsize = str.size() + extraSpace;
    str.resize(newsize);
    for(int i=newsize-1; i>=0; i--)
    {
        if(str[i]==' ')
        {
            str[i+(extraSpace--)]='0';
            str[i+(extraSpace--)]='4';
            str[i+(extraSpace--)]='@';
            extraSpace++;//space is also extra space
        }
        else
            str[i+extraSpace]=str[i];
    }
}

int main()
{
    string str = "My name is khan";
    replaceSecond(str);
    cout<<"\nAfter replace: "<<str<<endl;
    return 0;
}