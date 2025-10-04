/*01. Write a recursive function in C to print numbers from 1 to N.
Enter n= 5
Numbers from 1 to 5: 1 2 3 4 5 

*/
#include <stdio.h>
void func(int a)
{
    if(a==0) return;
    func(a-1);
    printf("%d ",a);
}
int main()

{
    int n;
    printf("Enter n= ");
    scanf("%d",&n);
    printf("Numbers from 1 to %d: ",n);
    func(n);
    printf("\n");
}
