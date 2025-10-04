/*09.Write a recursive function to check whether a number is prime.
Enter a number: 89
Prime number

*/

#include<stdio.h>
int func(int a,int b)
{
    if(a<=1)
    {
        printf("Not a prime number");
        return 0;
    }
    if(a==b) 
    {
        printf("Prime number");
        return 0;
    }
    if(a%b==0)
    {
        printf("Not a prime number");
        return 0;
    }

return func(a,b+1);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    func(n,2);
}
//Prime numbers: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97.
