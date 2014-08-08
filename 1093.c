#include<stdio.h>
void main()
{
    int n,a,b,i,j,sum;
    sum=0;
    while(scanf("%d\n",&n)!=-1)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&b);
            for(j=0;j<b;j++)
             {
                 scanf("%d",&a);
                 sum+=a;
             }
             printf("%d\n",sum);
             sum=0;
        }
    }
}
