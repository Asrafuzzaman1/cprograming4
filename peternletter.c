
#include<stdio.h>

int main()

{
    int j,n,i;
    printf("enter the value of n:");/* A B C
                                       A B C
                                       A B C */
    scanf("%d",&n);

for(i=1;i<=n;i++)/* print acrose colum*/
{


    for(j=1;j<=n;j++)/* print acrose row*/
    {
        printf("%c ",j+64); /* n times print j by first for loop*/
    }
    printf("\n");
}


    return 0;

}
