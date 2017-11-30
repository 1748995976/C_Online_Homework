#include<stdio.h>
void main(void)
{
    int a,b=1,c;
    scanf("%d",&a);
    while(b<=a)
    {
        scanf("%x",&c);
        printf("%d\n",c);
        b++;
    }
}
