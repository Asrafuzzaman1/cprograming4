#include<stdio.h>

int main()

{
    int j,n,i;                             /*1 2 3
                                             1 2 3
                                             1 2 3*/
    printf("enter the value of n:");
    scanf("%d",&n);

for(i=n;i>=1;i--)/* print acrose colum*/
{


    for(j=i;j>=1;j--)/* print acrose row*/
    {
        printf("%c ",j+64); /* n times print j by first for loop*/
    }
    printf("\n");
}


    return 0;

}

