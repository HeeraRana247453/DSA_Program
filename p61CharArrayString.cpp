/* Introduction to the char and string
    1)Null Character
    2)Length of string
    3)Reverse string (2-methods)
    4)Palindrome string or not (case sensitive)

 */
#include<iostream>
#include<cstring> //for copy char array into temp char array
using namespace std;


// Length of String
int length(char name[])
{
    int len=0;
    for(int i=0; name[i]!='\0'; i++)
        len++;
    return len;
}

//1.Reverse an String
void reverseString_1(char name[],int s)
{
    for(int i=0;i<s/2;i++)
        swap(name[i],name[s-1-i]);
}
//2.Reverse an String
void reverseString_2(char name[],int s)
{
    int low=0;
    int high=s-1;
    while(low<high)
        swap(name[low++],name[high--]);
}
// Palindrome string
bool palindromeString(char name[],int s)
{
    char temp[30];
    strcpy(temp,name); //This is Copy function
    
    int low=0;
    int high=s-1;
    while(low<high)
        swap(temp[low++],temp[high--]);

    if( strcmp(name,temp)==0 )  //for comparison of two character array
        return true;
 
    return false;
}


int main()
{
//0) Difference between the string and character array
    string str1 = {'H','e','\0','e','r','a','\0'};
    char str2[] = {'H','e','\0','e','r','a','\0'};
    cout<<"\nStr1 = "<<str1<<endl;
    cout<<"\nStr2 = "<<str2<<endl;
    // push back operation in string
    string str ="Heera";
    cout<<"\nstr is: "<<str<<endl;
    str.push_back(' ');
    str.push_back('R');
    str.push_back('a');
    str.push_back('n');
    str.push_back('a');
    cout<<"\nAfter push back, str is: "<<str<<endl;
    cout<<"\n********************************************\n";


//1)Null Character
    char name[30];
    cout<<"\nEnter your name: ";
    cin>>name;
    // name[3]='\0';//null char terminate the string(automatically add after each string)
    cout<<"\nYour name is: "<<name<<endl;

//2)length of string
    int len = length(name);
    cout<<"\nLength of string is: "<<len<<endl;

//3)Reverse string (2-methods)
    reverseString_2(name,len);
    cout<<"\nAfter Reverse: "<<name<<endl;

//4)Palindrome string or not (case sensitive)
    cout<<"\nGiven Char Array is plaindrom: "<<palindromeString(name,len)<<endl;
    
    return 0;
}