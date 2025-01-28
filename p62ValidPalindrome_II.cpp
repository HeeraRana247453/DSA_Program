/* 
Valid Palindrome-II
=====================
 Problem statement:
            Ninja’s friend challenged him with a trick question. He gave him a string ‘S’ and asked him if it is possible to make this string palindrome by deleting one character from the string. Can you help the ninja to solve this problem?
            You are given a string ‘S’ of size ‘N’.You have to determine whether it is possible to make the string palindrome by deleting at most one character.
 For Example:
            If the string is ‘AZBCDCBA’, the answer will be YES as we can delete the character ‘Z’ and the remaining string is a palindrome. 
 */

#include<iostream>
using namespace std;

bool ispalindrom(string &s,int low,int high)
{
    while(low<high)
    {
        if(s[low]!=s[high])
            return false;
        low++;
        high--;
    }
    return true;
}
bool validPalindrome(int n, string &s)
{
   for(int i=0;i<n/2;i++)
   {
       if(s[i]!=s[n-1-i])
        return ispalindrom(s,i+1,n-1-i) || ispalindrom(s,i,n-2-i);
   }
   return true;
}

int main()
{
    string str = "AZBCDCBA"; //Test case-1
    string str = "ROSSVR";  //Test case-2
    string str = "VWHGWV";  //Test case-3
    cout<<"\nGiven string is valid palindrome or not: "<<validPalindrome(str.size(),str)<<"\n";
    return 0;
}