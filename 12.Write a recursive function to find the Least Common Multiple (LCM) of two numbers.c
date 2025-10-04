/*12.Write a recursive function to find the Least Common Multiple (LCM) of two numbers.

Enter a number: 12
Enter another number: 18
LCM= 36

*/

#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
    
    
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main()
{
   int n,m;
   printf("Enter a number: ");
   scanf("%d",&n);
   printf("Enter another number: ");
   scanf("%d",&m);
   
   printf("LCM= %d", lcm(n,m));
   
} 
/*
2 | 12, 18
----------
2 | 6, 9
----------
3 | 3, 9
----------
3 | 1, 3
----------
    1, 1

LCM = 2 × 2 × 3 × 3
     = 36
*/

 
