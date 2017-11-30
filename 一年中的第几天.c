#include<stdio.h>
int main(void)
{
    int chars[12];
    int A,B,C,E,D;
    while(scanf("%d %d %d",&A,&B,&C)==3)
    {
        if(((A%4==0)&&(A%100!=0))||A%400==0)
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
            if(B==1)
                printf("该日期是这一年中的第%d天\n",C);
            if(B==2)
                printf("该日期是这一年中的第%d天\n",E+C);
            if(B>2){
                while(i<=B&&B>2)
            {

               E=E+chars[i-2];
               i++;
            }
            printf("该日期是这一年中的第%d天\n",E+C);
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
            if(B==1)
                printf("该日期是这一年中的第%d天\n",C);
            if(B==2)
                printf("该日期是这一年中的第%d天\n",E+C);
            if(B>2){
            while(i<=B&&B>2)
            {

               E=E+chars[i-2];
               i++;
            }
            printf("该日期是这一年中的第%d天\n",E+C);
            }
          }
    }
    return 0;
}
