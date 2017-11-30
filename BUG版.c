#include<stdio.h>
int main(void)
{
    int a,b,c,d,w,g,t;
    d=1;
    double f,e;
    double number[10];
    double disnumber[10];
    double unnumber[10];
    scanf("%d",&a);
    while(d<=a)
    {
        scanf("%d",&t);
        c=0;
        b=1;
        w=0;
        g=0;
        while(b<=10)
        {
            scanf("%lf",&e);
            if(e==0)
            {
                e=0;
                disnumber[w]=e;
                w++;
            }
            if((e>0)&&(e<=10000))
            {
                number[c]=e;
                c++;
            }
            b++;
        }
        f=0;
        if(c!=0)
        {
            while(g<c)
            {
                f=f+number[g];
                g++;
            }
            f=f/c;
            if(t==1)
                printf("In \"no continue\" way,numbers=%d,average=%.6lf\n",c,f);
            if(t==0)
                printf("In \"continue\" way,numbers=%d,average=%.6lf\n",c,f);
        }
        if(w==10)
        {
            if(t==0)
                printf("In \"continue\" way,numbers=0,average=0.000000\n");
            if(t==1)
                printf("In \"continue\" way,numbers=0,average=0.000000\n");
        }
        d++;
    }
    return 0;
}
