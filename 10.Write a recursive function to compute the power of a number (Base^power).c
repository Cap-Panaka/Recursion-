/*10.Write a recursive function to compute the power of a number (Base^power).
Enter Base : 5
ENter power: 2
Result: 25

*/

#include<stdio.h>
int func(int base,int power)
{
    if (base==0) return 0;
    if (power==0) return 1;
    return base*func(base,power-1);
    
}
int main()
{
    int b,p;
    printf("Enter Base : ");
    scanf("%d",&b);
    printf("ENter power: ");
    scanf("%d",&p);
    printf("Result: %d",func(b,p));
   
}
