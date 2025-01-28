// Reverse the digits of a number, if reverse no. is out of range of integer value then return 0;

#include<iostream>
#include <climits>  //necessary to add
using namespace std;

int main(){
    int n = 23;
    reverse(n);

    return 0;
}

int reverse(int x) {
        int min = INT_MIN;
        int max = INT_MAX;
        long rev = 0;
        while (x) {
            rev = (rev * 10) + x % 10;
            x = x / 10;
        }
        if(rev< INT_MIN || rev> INT_MAX)
            return 0;
        return int(rev);
    }