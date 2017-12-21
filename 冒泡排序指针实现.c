#include<stdio.h>
int main(void)
{
    int a, b, c, d, e;
    int number[10];
    int *p=number;
    for(;;)
    {
       for(b=0;b<10;b++)
       {
           if(scanf("%d",&p[b])==EOF)
                return 0;
       }
       for(d=8;d>=0;d--)
       {
            for(c=0;c<=d;c++)
            {
                if(p[c]>p[c+1])
                {
                    e=p[c+1];
                    p[c+1]=p[c];
                    p[c]=e;
                }
            }
       }
       for(d=0;d<10;d++)
       {
           if(d==9)
            {
                printf("%d\n",p[d]);
                break;
            }
           printf("%d->",p[d]);
       }
    }
    return 0;
}
