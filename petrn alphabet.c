

#include<stdio.h>

int main()

{
    int j,n,i;   /* A B C
                    A B C
                    A B C */

    printf("enter the value of n , if you want to print capital letter you must intput the value of n,where 65<=n>= 90 and if you want to print small letter you must intput the value of n , where 97<=n>=122 :");
    scanf("%d",&n);

for(i=65;i<=n;i++)/* print acrose colum*/
{


    for(j=65;j<=n;j++)/* print acrose row*/
    {
        printf("%c ",j); /* n times print j by first for loop*/
    }
    printf("\n");
}


    return 0;

}
