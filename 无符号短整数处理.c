#include<stdio.h>
int main(void)
{
    int N;
    int i=1,p=1;
    scanf("%d",&N);
    unsigned short number[N];
    while(i<=N)
    {
        scanf("%d",&number[i-1]);
        i++;
    }

    while(p<=N)
    {
        number[p-1]=((number[p-1]<<12)|(number[p-1]>>12))|(number[p-1]&(255<<4));
        printf("%d\n",number[p-1]);
        p++;
    }
    return 0;
}
