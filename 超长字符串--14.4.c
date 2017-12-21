#include<stdio.h>
#include<stdlib.h>
struct words{
    char b;
    struct words *next;
};
void create(struct words **headp,char *l);
int main(void)
{
    char shuzu[1000],*q=shuzu;
    struct words *head=NULL,*p;
    create(&head,q);
    p=head;
    while(p){
        putchar(p->b);
        p=p->next;
    }
    printf("\n");
    printf("\n");
    puts(q);
    return 0;
}
void create(struct words **headp,char *q)
{
    char a;
    int b=0;
    struct words *loc_head=NULL,*tail;
    loc_head=(struct words *)malloc(sizeof(struct words));
    a=getchar();
    q[b++]=a;//Êý×é´¢´æ
    loc_head->b=a;
    tail=loc_head;
    while((a=getchar())!='#'&&tail->b!='#'){
        tail->next=(struct words *)malloc(sizeof(struct words));
        tail=tail->next;
        tail->b=a;
        q[b++]=a;
    }
    q[b]='\0';
    tail->next=NULL;
    *headp=loc_head;
}
