#include<stdio.h>
#include<math.h>
int main(void)
{
    double a,b,c,d,i;
    b=-1;
    a=1;
    c=0;
    i=2;
    while(c<=100000)
    {
        c=2*i-1;
        a=b/c+a;
        b=-b;
        i++;

    }
    printf("%.9f",4*a);
    return 0;

}
