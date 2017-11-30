#include <stdio.h>
int main(void)
{
    int A,C;
    A=0;
    C=0;
    while(A<101)
    {
        C=C+A;
        A=A+1;
    }
    printf("%d",C);
    return 0;
}
