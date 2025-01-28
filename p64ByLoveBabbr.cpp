/* 
Maximum Occuring Character (but it will work only for smaller characters)
===========================
Given a string str.The task is to find the maximum occuring character in the string str.
If more than one character occurs the maximum number of time then print the lexicographically
smaller character.
*/

#include<iostream>
using namespace std;

char maxOccurChar(char str[],int s)
{
    // Create count of each alphabet
    int arr[26]={0};
    for(int i=0;i<s;i++)
    {
        int tempNum=0;
        if(str[i]>='a' && str[i]<='z'){
            tempNum = str[i] - 'a';
            arr[tempNum]++;
        }
    }
    // find maximum count
    int maxi=0;
    int ans;
    for(int i=0;i<26;i++)
    {
        cout<<char('a'+i)<<"-"<<arr[i]<<endl;
        if(arr[i]>maxi)
            maxi=arr[i], ans=i;
    }
    
    return 'a'+ans;
}

void display(char str[],int s){
    for(int i=0;i<s;i++)
        cout<<str[i]<<" ";
}

int main()
{
    char str[] = {'h','e','e','r','a',' ','f','r','o','m',' ','h','a','r','y','a','n','a','r'};

    int s=sizeof(str)/sizeof(str[0]);

    cout<<"\nGiven string is: ";
    display(str,s);
    cout<<"\n";

    char ch = maxOccurChar(str,s);
    cout<<"\n'"<<ch<<"' is the maximum occuring character\n";

    return 0;
}

// cin.getline (about_y, MAX_ABOUT_LEN, '$');    //$ is a delimiter