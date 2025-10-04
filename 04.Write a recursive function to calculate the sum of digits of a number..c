/*04.Write a recursive function to calculate the sum of digits of a number.
Enter the number: 45
Sum= 9
*/
#include<stdio.h>
int func(int a)
{
    if(a==0) return 0;
    return a%10+func(a/10);
    
}
int main() 
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    //func(n);
    printf("Sum= %d",func(n));
}
