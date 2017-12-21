#include<stdio.h>
int change(int number[],int n);
int main(void)
{
    int N ,n ,i ,h ,j;
    scanf("%d",&N);
    int number[100];
    int *p;
    p=number;
    for(i=1;i<=N;i++)
    {
        scanf("%d",&n);
        for(h=0;h<n;h++)
        {
            scanf("%d",&number[h]);
        }
        change(number,n);
        for(j=0;j<n;j++)
        {
            if(j==n-1)
            {
                printf("%d\n",*(p+j));
                break;
            }
            printf("%d ",*(p+j));
        }
    }
    return 0;
}
int change(int number[],int n)
{
    int low=0, high=n-1,j;
    if(n%2 == 0)
    {
        for(;low<=high;low++,high--)
        {
            j=number[low];
            number[low]=number[high];
            number[high]=j;
        }
    }
    else
    {
        for(;high-low>=1;low++,high--)
        {
            j=number[low];
            number[low]=number[high];
            number[high]=j;
        }
    }
    return 0;
}
