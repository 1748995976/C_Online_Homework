#include<stdio.h>
int main(void)
{
    int A,B,C;
    while(scanf("%d %d %d",&A,&B,&C)==3&&A>=0&&A<=100&&B>=0&&B<=100&&C>=0&&C<=100)
    {
        if(A==B&&B==C)
        {
            printf("A:");
            printf("%d\n",A);
        }
        if(A==B&&A!=C)
        {
            printf("A:");
            printf("%d\n",A);
        }
        if(C==B&&B!=A)
        {
            printf("B:");
            printf("%d\n",B);
        }
        if(C==A&&A!=B)
        {
            printf("A:");
            printf("%d\n",A);
        }
        if((A>B&&B>C)||(C>B&&B>A))
        {
            printf("B:");
            printf("%d\n",B);
        }
        if((B>A&&A>C)||(C>A&&A>B))
        {
            printf("A:");
            printf("%d\n",A);
        }
        if((A>C&&C>B)||(B>C&&C>A))
        {
            printf("C:");
            printf("%d\n",C);
        }
    }
        return 0;
}
