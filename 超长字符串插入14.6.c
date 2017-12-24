#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct words{
    char b;
    struct words *next;
};
void create(struct words **headp,char *l);
int main(void)
{
    int i=0,a;
    char c;
    char shuzu[1000],*q=shuzu;
    struct words *head=NULL,*p;
    create(&head,q);
    p=head;
    while(p){
        putchar(p->b);
        p=p->next;
        i++;
    }
    char number[i];
    printf("\n");
    printf("\n");
    puts(q);
    printf("Please input another word!\n");
    struct words *h,*prior,*p2;
    h=(struct words *)malloc(sizeof(struct words));
    getchar();
    scanf("%c",&h->b);
    for(p=head,a=0;a<i;prior=p,p=p->next,a++){
        c=(h->b)-(p->b);
        c=abs(c);
        number[a]=c;
        if(h->b==p->b){
            if(a==0){
                head->b=h->next->b;
                head=head->next;
                break;
            }
            prior->next=p->next;
            break;
        }
        if(p->next==NULL){
            for(a=0;a<i-1;a++)
                if(number[a]<number[a+1])
                    number[a+1]=number[a];
            for(a=0;number[a]!=number[i-1];a++);
            for(prior=head,p2=head->next,c=0;c<a;prior=p2,p2=p2->next,c++);
            prior->next=h;
            h->next=p2;
            break;
        }
    }
    p=head;
    while(p){
        putchar(p->b);
        p=p->next;
    }
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
