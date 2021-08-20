#include<stdio.h>
int main()
{
    int i,num,count;
    count=0;
    printf("enter any positive number.");
    scanf("%d",&num);

    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("the number is prim.");
    }
    else
    {
        printf("the number is not prim.");
    }





    return 0;
}
