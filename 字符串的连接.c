#include<stdio.h>
int main(void)
{
    int a, b, d, e;
    char words[10][100];
    char all[1000];
    char *p;
    int number[10];
    while(1)
    {
        scanf("%d",&a);
        getchar();
        if(a==0)
            return 0;
        for(b=0;b<a;b++)
        {
            number[b]=0;
            while((words[b][number[b]]=getchar())!='\n')
                number[b]++;
        }
        e=0;
        for(b=0;b<a;b++)
        {
            p=words[b];
            for(d=0;d<number[b];d++,e++,p++)
                all[e]=*p;
        }
        all[e]='\0';
        puts(all);
    }
    return 0;
}
