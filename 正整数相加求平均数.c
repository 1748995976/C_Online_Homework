#include<stdio.h>
int main(void)
{
    int a,b,c,d,g,t,w;
    double number[10];
    double what[10];
    double f,h,e;
    d=1;
    scanf("%d",&a);
    while(d<=a)
    {
        scanf("%d",&t);
        b=1;
        c=0;
        g=1;
        w=0;
        if(t==1)
        {
            while(b<=10)
            {
                scanf("%lf",&e);
                if(e>0&&e<=10000)
                {
                    number[c]=e;
                    c++;
                }
                if(e==0)
                {
                    what[w]=e;
                    w++;
                }
                b++;
            }
            f=0;
            while(g<=c&&c!=0)
            {
                if(c==1)
                    f=number[0];
                if(c>1&&c%2==1)
                {
                    f=f+number[g-1]+number[g];
                    g=g+2;
                }
                if(c>1&&c%2==0)
                {
                    f=f+number[g-1]+number[g];
                    if(c-g==1)
                        break;
                    g=g+2;
                }
            }
            f=f/c;
            if(c!=0)
            printf("In \"no continue\" way,numbers=%d,average=%.6lf\n",c,f);
            if(w==10)
            printf("In \"no continue\" way,numbers=0,average=0.000000\n");
        }
        if(t==0)
        {
            while(b<=10)
            {
                scanf("%lf",&e);
                b++;
                if(e>=-10000&&e<0)
                    continue;
                if(e>0&&e<=100000)
                {
                    number[c]=e;
                    c++;
                }
                if(e==0)
                {
                    what[w]=e;
                    w++;
                }
            }
            f=0;
            while(g<=c&&c!=0)
            {
                if(c==1)
                    f=number[0];
                if(c>1&&c%2==1)
                {
                    f=f+number[g-1]+number[g];
                    g=g+2;
                }
                if(c>1&&c%2==0)
                {
                    f=f+number[g-1]+number[g];
                    if(c-g==1)
                        f=f+number[c];
                    g=g+2;
                }
            }
            f=f/c;
            if(c!=0)
            printf("In \"continue\" way,numbers=%d,average=%.6lf\n",c,f);
            if(w==10)
            printf("In \"continue\" way,numbers=0,average=0.000000\n");
        }
        d++;
    }
    return 0;
}
