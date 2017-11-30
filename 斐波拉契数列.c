#include<stdio.h>
int main(void)
{
    int i,t,a,b,c;
    a=1;
    b=1;
    while(1)
    {
        if (scanf("%d",&i)==1&&i>=3)
        {
            a=1;
            b=1;
            t=1;
            printf("%10d",b);
            while(t<i)
            {
                printf("%10d",a);
                if((t+1)==i&&((t+1)%8!=0))
                    printf("\n");
                if((t+1)%8==0)
                    printf("\n");
                c=a;
                a=a+b;
                b=c;
                t++;
            }
            printf("\n");
        }
        if(i<3&&i>0)
        {
            printf("Error!\n");
            printf("\n");
            continue;
        }
        if(i==0)
            break;
    }
        return 0;
}
