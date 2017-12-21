#include<stdio.h>
#include<stdlib.h>
struct Student{
    int number;
    char name[19];
    double score;
};
int main(void)
{
    int N,i,a;
    scanf("%d",&N);
    struct Student s[N*3],*p;
    p=&s[0];
    for(i=0;i<N;i++){
        scanf("%d %s %lf",&s[i*3].number,s[i*3].name,&s[i*3].score);
        scanf("%d %s %lf",&s[i*3+1].number,s[i*3+1].name,&s[i*3+1].score);
        scanf("%d %s %lf",&s[i*3+2].number,s[i*3+2].name,&s[i*3+2].score);
    }
    for(i=0,a=0;i<N;i++,p=p+3){
        printf("%d\t%-20s%lf\n",s[i*3].number,s[i*3].name,s[i*3].score);
        printf("%d\t%-20s%lf\n",s[i*3+1].number,s[i*3+1].name,s[i*3+1].score);
        printf("%d\t%-20s%lf\n",s[i*3+2].number,s[i*3+2].name,s[i*3+2].score);
        printf("%d\t%-20s%lf\n",p->number,p->name,p->score);
        printf("%d\t%-20s%lf\n",(p+1)->number,(p+1)->name,(p+1)->score);
        printf("%d\t%-20s%lf\n",(p+2)->number,(p+2)->name,(p+2)->score);
    }
    return 0;
}
