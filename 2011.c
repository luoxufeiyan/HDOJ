#include<stdio.h>
int main()
{
    int n,i,x,j;
    double a,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        sum=0;
        for(j=1;j<=x;j++)
        {
            if(j%2==1)
            {
                sum+=(double)1/j;
            }
            if(j%2==0)
            {
                sum-=(double)1/j;
            }
        }
        printf("%.2lf\n",sum);
    }
}
