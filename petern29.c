#include<stdio.h>
int main()

{
    int i,j,n,k;
    printf("enter the value of n:"); /*1
                                       1 2
                                       1 2 3 */
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        for(k=5;k>=i;k--)

        printf("  ");

        for(j=1;j<=i;++j)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

}

