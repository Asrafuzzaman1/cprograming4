#include<stdio.h>

int main()
{
    int n,s,i;
    printf("enter the value of n:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        s=5*i;

        printf("5 * %d =%d\n",i,s);
         i=i+1;
    }
}
