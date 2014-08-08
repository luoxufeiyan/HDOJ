#include <stdio.h>
int main()
{
    int n,sum,i,t;
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&t);
            sum=sum+t;
        }
        printf("%d\n",sum);
    }
}
