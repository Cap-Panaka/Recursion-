/*06.Write a recursive function to find the factorial of a given number. 
Enter the number: 7
The factorial of 7 is 5040
*/

#include<stdio.h>
int func(int a)
{
    if(a==0)  return 1;
    return a* func(a-1);
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    //func(n);
    printf("The factorial of %d is %d",n,func(n));
}
