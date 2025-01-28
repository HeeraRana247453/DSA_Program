/* WAP to check the given string is palindrome or not
*/
#include<iostream>
using namespace std;

// First Approach(Two pointer)
bool checkPalindrome_1(string str,int i,int j)
{
    if(i>j)
        return true;
    
    if(str[i]!=str[j])
        return false;
    
    return checkPalindrome_1(str,i+1,j-1);
}

// Second Approach(single pointers)
bool checkPalindrome_2(string str,int i)
{
    int s = str.size()-1;
    if(i>s-i)
       return true;
    
    if(str[i]!=str[s-i])
        return false;

    return checkPalindrome_2(str,i+1);
}
int main()
{
    string str1;
    cout<<"\nEnter the string: ";
    getline(cin,str1);

    int s = str1.size();
    bool res = checkPalindrome_1(str1,0,s-1);
    if(res==1)
        cout<<"\nThe given string is palindrome\n";
    else
        cout<<"\nGiven string is not palindrome\n";



    string str2;
    cout<<"\nEnter the string: ";
    cin>>str2;

    bool res2 = checkPalindrome_2(str2,0);
   
    (res)? cout<<"Palindrome\n":cout<<"Not Palindrome\n";

    return 0;
}