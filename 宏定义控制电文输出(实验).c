#include<stdio.h>
#define CHANCE(d) (d%2)
int main(void)
{
    int i=0,g=0,a,c,d,e=1,f;
    char words[100];
    scanf("%d",&c);
    getchar();
    for(;e<=c;e++){
        while(a=getchar()){
            if(a=='\n')
                break;
            words[i]=a;
            i++;
        }
        d=words[0];
        f=CHANCE(d);
        words[i]='\0';
        if(f == 0)
            puts(words);
        if(f == 1){
            for(;;){
                if(g==i)
                    break;
                if(words[g]>=97&&words[g]<=122)
                    words[g]=words[g]-32;
                else if(words[g]>=65&&words[g]<=90)
                    words[g]=words[g]+32;
                g++;
            }
            puts(words);
        }
        i=0;
        g=0;
    }
   return 0;
}
