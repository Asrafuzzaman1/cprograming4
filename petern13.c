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


    for(j=n;j>=i;j--)/* print acrose row*/
    {
        printf("%d ",j); /* n times print j by first for loop*/
    }
    printf("\n");
}


    return 0;

}

