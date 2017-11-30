#include<stdio.h>
int main(void)
{
    int t;
    double A,B;
    char C;
    while((scanf("%d %lf %lf %c",&t,&A,&B,&C)==4)&&A>-100000&&A<100000&&B>-100000&&B<100000&&A!=0&&B!=0)
    {
        if(t==0)
        {
            if(C==42)
            printf("After if-else processing,the result is : %.2f\n",A*B);
            if(C==43)
            printf("After if-else processing,the result is : %.2f\n",A+B);
            if(C==45)
            printf("After if-else processing,the result is : %.2f\n",A-B);
            if(C==47)
            printf("After if-else processing,the result is : %.2f\n",A/B);
            printf("\n");
        }
        if(t==1)
        {
            switch(C){
            case 42:printf("After switch processing,the result is : %.2f\n\n",A*B);
                break;
            case 43:printf("After switch processing,the result is : %.2f\n\n",A+B);
                break;
            case 45:printf("After switch processing,the result is : %.2f\n\n",A-B);
                break;
            case 47:printf("After switch processing,the result is : %.2f\n\n",A/B);
                break;}
        }
        if(t==2)
        {
            if(C==42){
                printf("After if-else processing,the result is : %.2f\n",A*B);
                printf("After switch processing,the result is : %.2f\n",A*B);}
            if(C==43){
                printf("After if-else processing,the result is : %.2f\n",A+B);
                printf("After switch processing,the result is : %.2f\n",A+B);}
            if(C==45){
                printf("After if-else processing,the result is : %.2f\n",A-B);
                printf("After switch processing,the result is : %.2f\n",A-B);}
            if(C==47){
                printf("After if-else processing,the result is : %.2f\n",A/B);
                printf("After switch processing,the result is : %.2f\n",A/B);}
            printf("\n");
        }
    }
    return 0;
}
