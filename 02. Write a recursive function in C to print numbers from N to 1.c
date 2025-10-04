/*02. Write a recursive function in C to print numbers from N to 1.
Enter n= 5
Numbers from 1 to 5: 5 4 3 2 1 

*/
#include <stdio.h>
void func(int a)
{
    if(a==0) return;
    
    printf("%d ",a);
    func(a-1);   //JUst put here -,- 
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
