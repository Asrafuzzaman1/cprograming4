#include<stdio.h>

int main()
{
    int a,b,c,d;
    a=15;
    b=10;
    c=++a-b;
    printf("%d-%d=%d\n",a,b,c);
    d=b++ +a;
    printf("%d+%d=%d\n",b,a,d);
    printf("a/b=%d\n",a/b);
    printf("a%%b=%d\n",a%b);
    printf("a*=b=%d\n",a*=b);
    printf("%d\n",(c>d)?1:0);
    printf("%d\n",(c<d)?1:0);



}
