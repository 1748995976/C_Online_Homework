#include<stdio.h>
#include<math.h>
int main(void)
{
    unsigned int A,B,C;
A=292;B=pow(2,31);

    while(B>0)
    {
        C=A&B;
        if(C>0)
            printf("1");
        if(C<=0)
            printf("0");

        B=B/2;
    }

return 0;

}
