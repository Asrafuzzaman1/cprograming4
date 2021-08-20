//c-d!=0
#include<stdio.h>
int main()
{
    int a,b,c,d,x,y;
    float ratio;
    printf("enter the value of a,b,c and d.");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    x=(a+b);
    y=(c-d);
    if((c-d)!=0)
    {
        ratio=(float)(a+b)/(float)(c-d);
        printf("the ratio is =%f ",ratio);
    }
    if((c-d)==0)
    {
        printf("MATH ERROR.");
    }


    return 0;
}
