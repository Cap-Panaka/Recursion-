/*05.Write a recursive function to reverse an integer number.  
Enter the number: 456
Reverse number: 654
*/

#include<stdio.h>
int moja(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    return moja(a/10,b*10+a%10);
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int rev= moja(n,0);
    printf("Reverse number: %d",rev);
}
