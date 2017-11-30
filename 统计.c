#include<stdio.h>
int main(void)
{
    int number[10]={[0]=0};
    int a,b=0,c=0,d=0,e;
    for(;;){
        a=getchar();
        b=0;
        if(a==35){
            break;
        }
        if(a-48>=0&&a-48<=9){
            b++;
            number[a-48]=number[a-48]+b;
        }
        else if((a<=90&&a>=65)||(a<=122&&a>=97))
            c++;
        else
            d++;
    }
    for(e=0;e<=9;e++)
        printf("Number %d: %d\n",e,number[e]);
    printf("characters: %d\n",c);
    printf("other: %d\n",d);
    return 0;
}
