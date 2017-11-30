#include<stdio.h>
int main(void)
{
    int N;
    int i=1,p=1;
    scanf("%d",&N);
    getchar();
    char number[N];
    while(i<=N)
    {
        scanf("%c",&number[i-1]);
        getchar();
        i++;
    }
    while(p<=N)
    {
        if((number[p-1]<=57)&&(number[p-1]>=48))
            printf("%c\n",number[p-1]);
        else if((number[p-1])<=70&&(number[p-1])>=65)
            printf("%d\n",number[p-1]-55);
        else if((number[p-1]<=102)&&(number[p-1])>=97)
                printf("%d\n",number[p-1]-87);
        else
            printf("%d\n",number[p-1]);

            p++;
    }
    return 0;

}
