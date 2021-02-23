/*************************************************************
 Program to multiply two numbers using Russian peasant method
 Given two integers, write a function to multiply them without using multiplication operator.
 We double the first number and halve the second number repeatedly till the second number doesn’t become 1. 
In the process, whenever the second number becomes odd, we add the first number to result.

 *************************************************************/

#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2, result = 0, m, n;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    m = num1;
    n =  num2;
    while(n > 0)
    {
        if(n % 2 != 0)
        {
            result += m;
        }
//implementation of logic
        m << 2;
        n >> 2;
    }
    printf("%d * %d = %d", num1, num2, result);
    return 0;
}

/*
Sample Input Output
Enter two numbers: 12 13
12 * 13 = 156
*/
