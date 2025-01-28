/* 
125. Valid Palindrome
======================
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters,
 it reads the same forward and backward. Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise. */
#include<iostream>
using namespace std;

bool isPalindrome(string s){
    int l=0;
    int h=s.size()-1;
    while(l<h)
    {
        if(!isalnum(s[l])){
            l++;
            continue;}
        if(!isalnum(s[h])){
            h--;
            continue;}
        if(tolower(s[l])!=tolower(s[h]))
            return false;
        else
            l++,h--;
    }
    return true;
}

int main()
{
    string str = "A man, a plan, a canal: Panama";     //Test case-1
    // string str = "race a car";                         //Test case-2
    // string str = " ";                                  //Test case-3

    int res = isPalindrome(str);
    if(res==1)
        cout<<"\nYES, given phrase- '"<<str<<"' is palindrome\n\n";
    else
        cout<<"\nNO, given phrase- '"<<str<<"' is not palindrome\n\n";
    
    return 0;
}