#include<stdio.h>
unsigned long int combine(int n);
int main(void)
{
    int a;
    while(scanf("%d",&a)!=EOF)
        printf("%lu\n",combine(a));
    return 0;
}
unsigned long int combine(int n)
{
    int b;
    if(n<=2)
    {
        b=1;
        return b;
    }
    else
    {
        b=combine(n-1)+combine(n-2);
        return b;
    }
}
