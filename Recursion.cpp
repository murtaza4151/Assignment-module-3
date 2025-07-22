//Write a C++ program that calculates the factorial of a number using recursion.//
#include<iostream>
using namespace std;

int fact(int n)
{ 
    if(n == 0)
    {
        return 1;
    }
    return n * fact(n-1);
}

int main()
{
    int result;
    result = fact(5);
    cout<<result;
    return 0;
}