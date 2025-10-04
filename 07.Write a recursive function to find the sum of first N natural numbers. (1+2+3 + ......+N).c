/*07.Write a recursive function to find the sum of first N natural numbers. (1+2+3 + ......+N)
Enter N= 5
1+2+3+...+5 = 15 

*/

#include<stdio.h>
int func(int a)
{
    if (a==0) return 0;
    return a+func(a-1);
}

int main()
{
    printf("Enter N= ");
    int n;
    scanf("%d",&n);
    printf("1+2+3+...+%d = %d ",n,func(n));
}
