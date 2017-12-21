#include<stdio.h>
struct ymd{
    int year;
    int month;
    int day;
};
int main(void)
{
    int a,N,D,E;
    int chars[12];
    struct ymd love;
    scanf("%d",&N);
    for(a=0;a<N;a++){
        scanf("%d",&love.year);
        scanf("%d",&love.month);
        scanf("%d",&love.day);
        if(((love.year%4==0)&&(love.year%100!=0))||love.year%400==0)
        {
            chars[0]=31;
            chars[1]=29;
            chars[2]=31;
            chars[3]=30;
            chars[4]=31;
            chars[5]=30;
            chars[6]=31;
            chars[7]=31;
            chars[8]=30;
            chars[9]=31;
            chars[10]=30;
            chars[11]=31;
            int i=3;
            E=chars[0];
            if(love.month==1)
                printf("%d\n",love.day);
            if(love.month==2)
                printf("%d\n",E+love.day);
            if(love.month>2){
                while(i<=love.month&&love.month>2)
            {

               E=E+chars[i-2];
               i++;
            }
            printf("%d\n",E+love.day);
        }     }
         else
         {
            chars[0]=31;
            chars[1]=28;
            chars[2]=31;
            chars[3]=30;
            chars[4]=31;
            chars[5]=30;
            chars[6]=31;
            chars[7]=31;
            chars[8]=30;
            chars[9]=31;
            chars[10]=30;
            chars[11]=31;
            int i=3;
            E=chars[0];
            if(love.month==1)
                printf("%d\n",love.day);
            if(love.month==2)
                printf("%d\n",E+love.day);
            if(love.month>2){
            while(i<=love.month&&love.month>2)
            {

               E=E+chars[i-2];
               i++;
            }
            printf("%d\n",E+love.day);
            }
          }
    }
    return 0;
}
