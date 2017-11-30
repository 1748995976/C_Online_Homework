#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,b,c;
    c=1;
    float e,f,g,d,q;
    scanf("%d",&a);
    while(c<=a)
    {
        scanf("%f %f %f",&e,&f,&g);
        q=(e+f+g)/2;
        d=sqrt(q*(q-e)*(q-f)*(q-g));
        printf("area=%.6f\n",d);
        c++;
    }
    return 0;
}
