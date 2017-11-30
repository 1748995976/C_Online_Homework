#include<stdio.h>
int main(void)
{
    int x,p,n,i,s;
    s=sizeof(int)*8;
    scanf("%d %d %d",&x,&p,&n);
    int mask = 1<< (s-1);
    for ( i=1; i<=s; ++i){
           putchar ( ! ( x & mask ) ? '0':'1');
          x<<=1;
          if( ! ( i % 8 ) && i<s ) putchar(' ');

    }printf("\n");
    int A = 1;
    for ( i=1; i<=s; ++i){
          if(i>=(p+1)&&i<=(n+1))
            putchar(( x & A ) ? '0':'1');
          else
            putchar(( x & A ) ? '1':'0');
            A<<=1;
          if( ! ( i % 8 ) && i<s ) putchar(' ');

    }
    return 0;

}
