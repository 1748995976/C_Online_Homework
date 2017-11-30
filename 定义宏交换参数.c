#include<stdio.h>
void swap(int*x,int*y);
int main(void)
{
    int a,b,i;
    i=1;
    while(scanf("%d %d",&a,&b)==2)
    {
        printf("Case %d:\n",i);
        printf("Before Swap:a=%d b=%d\n",a,b);
        swap(&a,&b);
        printf("After Swap:a=%d b=%d\n\n",a,b);
        i++;
    }
    return 0;
}
void swap(int*x,int*y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
}
