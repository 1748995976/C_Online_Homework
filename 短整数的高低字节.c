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
        printf("%c,",(number[p-1]>>8));
        printf("%c\n",(number[p-1]));
        p++;
    }
    return 0;
}
