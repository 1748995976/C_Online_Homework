#include<stdio.h>
int main(void)
{
    int k,a,b,c;
    unsigned long int n;
    while(1)
    {
        unsigned long int number[10]={0,0,0,0,0,0,0,0,0,0};
        a=1;
        b=0;
        if(scanf("%lu %d",&n,&k)!=2)
            break;
        while(n>0)
        {
            number[b]=n%10;
            n=n/10;
            b++;
        }
        if(k>b)
            printf("-1\n");
        if(k<=b)
        printf("%lu\n",number[k-1]);

    }
    return 0;
}
