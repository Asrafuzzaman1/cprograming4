#include<stdio.h>
int main()
{
    double d,a,b,c,x1,x2;
    printf("enter the value of a,b and c :");
    scanf("%lf %lf %lf",&a,&b,&c);

    d=sqrt(b*b-4*a*c);


    x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);
    printf("the value of x1 is =%lf\nthe value of x2 is =%lf",x1,x2);








    return 0;
}
