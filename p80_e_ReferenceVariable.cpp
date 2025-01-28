#include<iostream>
using namespace std;

int& func(int a) {  //it cann't return the reference of variable 'a' , because the scope of variable 'a' is in the func only
    int num = a;
    int& ans = num;
    return ans;
}

int* fun(int n) {   //it cann't return the value of ptr, because the scope of pointer ptr is only inside the fun function
    int* ptr = &n;
    return ptr;
}

void update2(int &n) {
    n++;   //it will update in main function
}

void update1(int n) {
    n++;   //it will not update in main function
}

int main() {

    /*
    int i = 5;

    int &j = i;  //create a ref variable 

    cout << i << endl; 
    i++;
    cout << i << endl; 
    j++;
    cout << i << endl; 
    cout << j << endl;
    */

   int n = 5;
   cout << "Before " << n << endl;
   update2(n);
   cout << "After " << n << endl;

   fun(n);

    return 0;
}