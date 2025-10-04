/*11.Write a recursive function to find the greatest common divisor (GCD) of two numbers.

Enter a number: 36
Enter another number: 60
GCD= 12

*/

#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
    
    
}
int main()
{
   int n,m;
   printf("Enter a number: ");
   scanf("%d",&n);
   printf("Enter another number: ");
   scanf("%d",&m);
   
   printf("GCD= %d", gcd(n,m));
   
} 
/*
36 = 2 × 2 × 3 × 3
60 = 2 × 2 × 3 × 5

GCD = Multiplication of Common Factors
     = 2 × 2 × 3
     = 12
*/

