#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Web{
    char small_name[20];
    char big_name[40];
    char URL[50];
};
int main(void)
{
    int n,i,a;
    scanf("%d",&n);
    int number[n];
    struct Web p[n],q;
    for(i=0;i<n;i++){
        scanf("%s",p[i].small_name);
        scanf("%s",p[i].big_name);
        scanf("%s",p[i].URL);
    }
    for(i=0;i<n;i++){
        printf("%-20s",p[i].small_name);
        printf("%-40s",p[i].big_name);
        puts(p[i].URL);
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(a=0;p[i].small_name[a]!='\0';a++);
        number[i]=a;
    }
    for(i=0;i<n;i++){
        for(a=0;a<n-i-1;a++)
            if(strcmp(p[a].small_name,p[a+1].small_name)>0){
            q=p[a+1];
            p[a+1]=p[a];
            p[a]=q;
        }
    }
    for(i=0;i<n;i++){
        printf("%-20s",p[i].small_name);
        printf("%-40s",p[i].big_name);
        puts(p[i].URL);
    }
    return 0;
}
