#include<stdio.h>

int main()

{
    int j,n,i;                             /*1 2 3
                                             1 2 3
                                             1 2 3*/
    printf("enter the value of n:");
    scanf("%d",&n);

for(i=1;i<=n;i++)/* print acrose colum*/
{


    for(j=1;j<=n;j++)/* print acrose row*/
    {
        if(i==j||i==n||j==1)


        printf("* ");
        /* n times print j by first for loop*/
                 else
                printf("  ");





    }
    printf("\n");
}


    return 0;

}
