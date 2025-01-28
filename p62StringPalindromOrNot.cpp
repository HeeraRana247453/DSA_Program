/* 
Check If the String Is a Palindrome
=====================================
Problem statement
        You are given a string 'S'. Your task is to check whether the string is palindrome or not. For checking palindrome, consider alphabets and numbers only and ignore the symbols and whitespaces.

Note :
    String 'S' is NOT case sensitive.
Example :
    Let S = “c1 O$d@eeD o1c”.
    If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “c1odeedo1c”, which is a palindrome. Hence, the given string is also a palindrome.
 */
#include<iostream>
using namespace std;

// First Approach (my approach)
bool checkPalindrome_1(string s)
{
    int low=0;
    int high=s.size()-1;
    while(low<=high)
    {
        if((s[low]<='Z' && s[low]>='A') || (s[low]<='z' && s[low]>='a') || (s[low]>='0' && s[low]<='9'))   //we can also use isalnum(s[low]) built in function
        {
            if((s[high]<='Z' && s[high]>='A') || (s[high]<='z' && s[high]>='a') || (s[high]>='0' && s[high]<='9')) //we can also use isalnum(s[high]) built in function
            {
                if(tolower(s[low])!=tolower(s[high]))
                    return false;
                else{
                    low++;
                    high--;
                }
            }
            else
                high--;
        }
        else
            low++;
        
    } 
    return true;
}
// Second Approach (ChatGPT)
bool checkPalindrome_2(string s)
{
    int low = 0;
    int high = s.size() - 1;
    while (low <= high)
    {
        if (!((s[low] >= 'a' && s[low] <= 'z') || (s[low] >= 'A' && s[low] <= 'Z') || (s[low] >= '0' && s[low] <= '9'))) //we can also use isalnum(s[low]) built in function
        {
            low++;
            continue;
        }
        if (!((s[high] >= 'a' && s[high] <= 'z') || (s[high] >= 'A' && s[high] <= 'Z') || (s[high] >= '0' && s[high] <= '9'))) //we can also use isalnum(s[low]) built in function
        {
            high--;
            continue;
        }
        if (tolower(s[low]) != tolower(s[high]))
            return false;
        
        low++;
        high--;
    }
    return true;
}


int main()
{   
    string str;
    // cout<<"Enter the string: ";cin>>str;

    // str = "c1 O$d@eeD o1c";              //Test case-1
    // str = "codingninjassajNiNgNidoc";    //Test case-2
    // str = "N2 i&nJA?a& jnI2n";           //Test case-3
    str = "A1b22Ba";                     //Test case-4

    int flag = checkPalindrome_2(str);
    
    if(flag==1)
        cout<<"\nGiven string is Palindrom\n";
    else
        cout<<"\nGiven string is not Palindrom\n";

    return 0;
}