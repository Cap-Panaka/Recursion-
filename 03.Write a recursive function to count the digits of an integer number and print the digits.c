/*03Write a recursive function to count the digits of an integer number and print the digits. 
Enter the number: 8906
Digits:  8 9 0 6 
Counter: 4

*/
#include<stdio.h>
int gojo(int a)
{
    if(a==0) return 0;
    int count = gojo(a/10);
    printf("%d ",a % 10);
    return count+1;
    
}


int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Digits: %d",n);
        printf("Counter: %d",n);
        return 0;
    }
    printf("Digits:  ");
    int counter=gojo(n);
    
    printf("\nCounter: %d",counter);
    
}
