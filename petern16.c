#include<stdio.h>

int main()

{
    int j,n,i;                             /*1 2 3
                                             1 2 3
                                             1 2 3*/
    printf("enter the value of n:");
    scanf("%d",&n);

for(i=5;i>=1;i--)/* print acrose colum*/
{


    for(j=1;j<=i;j++)/* print acrose row*/
    {
        printf("%c ",j+64); /* n times print j by first for loop*/
    }
    printf("\n");
}


    return 0;

}
