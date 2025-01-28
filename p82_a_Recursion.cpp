#include<iostream>
using namespace std;

long long factorial(int n);
int exponent(int b, int a);
void counting_1(int n); //Tail Recursion
void counting_2(int n); //Head Recursion
int fibonacci(int num);


int main()
{
// Factorial
    // int n;
    // cout<<"\nEnter the factorial number: ";cin>>n;
    // cout<<"\nFactorial of "<<n<<" is : "<<factorial(n)<<"\n\n";

// Power
    // int b,a;
    // cout<<"\nEnter the base value: ";cin>>b;
    // cout<<"\nEnter the power : ";cin>>a;
    // cout<<"\n"<<b<<" to the power "<<a<<" is : "<< exponent(b,a)<<"\n\n";

//Counting 
    // int m;
    // cout<<"\nEnter the counting no. : ";cin>>m;
    // cout<<"\nCountings: "; counting_1(m);
    // cout<<"\nCountings: "; counting_2(m);
    // cout<<"\n\n";

// Fibonacci Number
    int num;
    cout<<"\nEnter the nth number : ";cin>>num;
    int fib = fibonacci(num);
    cout<<"\nFibonacci Number at "<<num<<" place is: "<<fib<<endl;
    cout<<"\n\n";


    return 0;
}


long long factorial(int n)
{
    // Base case
    if(n==1 || n==0)
        return 1;

    // Recursive relation
    return n*factorial(n-1);
}

int exponent(int b, int a)
{
    if(a==0)
        return 1;

    return b * exponent(b,a-1);
}

void counting_1(int n)
{
    if(n==0)
        return;

    cout<<n<<" ";  //Print first then evaluate the condition
    counting_1(n-1);
}

void counting_2(int n)
{
    if(n==0)
        return;
    
    //Recursive relation
    counting_2(n-1);   //First evaluate the recursive tree then print from the base condition
    cout<<n<<" ";    
}

int fibonacci(int num)
{
    if(num==1 || num==2)//base condition
        return num-1;

    return fibonacci(num-1) + fibonacci(num-2); //recursive relation
}