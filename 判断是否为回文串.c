#include<stdio.h>
int judge(char x[]);
static int g=0,q=0;
int main(void)
{
    int a=1,b,i=0;
    char characters[1000];
    scanf("%d",&b);
    getchar();
    while(a<=b)
    {
        for(;;){
            characters[i]=getchar();
            if(characters[i]=='\n')
                break;
            i++;
        }
        g=i-1;
        if(judge(characters))
            printf("Yes!\n");
        else
            printf("No!\n");
        i=0;
        g=0;
        q=0;
        a++;
    }
    return 0;
}
int judge(char x[])
{

    if(g == q*2){
        return 1;
    }else if((g-2*q) == 1){
        if (x[q] == x[g-q])
            return 1;
        else
            return 0;
    }
    if(x[q]==x[g-q]){
        q++;
        return judge(x);
    }
    if(x[q]!=x[g-q]){
        return 0;
    }
}
