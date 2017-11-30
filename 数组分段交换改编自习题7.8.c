#include<stdio.h>
int main(void)
{
    int n,k,a,b,c;
    while((scanf("%d %d",&n,&k)!=EOF))
    {
        a=k;
        b=1;
        int number[n];
        for(c=1;c<=n;c++)
            scanf("%d",&number[c-1]);
        for(;k<=n-1;k++)
            printf("%d ",number[k]);
        for(;b<=a;b++)
        {
            if(b==a)
            {
                printf("%d\n",number[b-1]);
                break;
            }
            printf("%d ",number[b-1]);
        }
    }
    return 0;
}
