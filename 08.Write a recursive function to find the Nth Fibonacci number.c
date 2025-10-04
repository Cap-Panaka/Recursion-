/*08.Write a recursive function to find the Nth Fibonacci number.
Enter N= 6
6th Fiboncaai number = 8 

*/

#include<stdio.h>
int func(int a)
{
    if(a==0) return 0;
    if(a==1) return 1;
    return func(a-1) + func(a-2);
}

int main()
{
    printf("Enter N= ");
    int n;
    scanf("%d",&n);
    printf("%dth Fiboncaai number = %d ",n,func(n));
}
//Fibonacci series:1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, ...
