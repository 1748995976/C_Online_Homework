#include<stdio.h>
int mycpy (void);
int main(void)
{
    int N,a=1;
    scanf("%d",&N);
    while(a<=N)
    {
        getchar();
        mycpy();
        a++;
    }
    return 0;
}
int mycpy(void)
{
    int t=0,s=0,n,g;
    char characters[1000];
    for(;;){
        characters[t]=getchar();
        if(characters[t]=='\n')
            break;
        t++;
        }
        scanf("%d",&n);
    char among[n];
    for(;s<n;s++)
        among[s]=characters[s];
    for(g=0;g<s;g++){
        if(g==s-1){
            putchar(among[g]);
            printf("\n");
            break;
        }
        putchar(among[g]);
    }

    return 0;
}
