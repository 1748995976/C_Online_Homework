#include<stdio.h>
int main(void)
{
    int A,B,C,D,E,F,G;
    while(scanf("%d %d",&A,&B)==2)
    {
        if(A==0&&B==0)
            break;
        F=A;
        G=B;
        if(A<B)
        {
            D=A;
            A=B;
            B=D;
        }
        while(B!=0)
        {
            C=A%B;
            A=B;
            B=C;
        }
        E=(G*F)/A;
        printf("%d %d\n",A,E);
    }
    return 0;
}
