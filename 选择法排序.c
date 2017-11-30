#include<stdio.h>
int main(void)
{
    int n,k=0,i=0,a,b=0,c,d;
    int number[21];
    while(scanf("%d",&n)==1&&n!=0){
        for(d=0;d<n;d++)
            scanf("%d",&number[d]);
        for(;i<n;){
            if(number[i]<=number[k]){
                k++;
                if(k==n){
                    a=number[b];
                    number[b]=number[i];
                    number[i]=a;
                    b++;
                    i=b;
                    k=b;
                    continue;
                }
            }
            else{
                i=k;
            }
        }
        for(c=0;c<n;c++){
            if(c==n-1){
                printf("%d\n",number[c]);
                k=0;
                i=0;
                b=0;
                break;
            }
            printf("%d ",number[c]);
        }
    }
    return 0;
}
