#include<stdio.h>
int sum[55]={1,2,3,4,6,9,13};
int main()
{
    int n,i;
    while(~scanf("%d",&n)&&n>0&&n<55)
    {
        for(i=7;i<55;i++)
        {
            sum[i]=sum[i-1]+sum[i-3];
        }
    printf("%d\n",sum[n-1]);
    }
}
