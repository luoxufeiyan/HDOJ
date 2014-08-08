#include<stdio.h>
int main()
{
    int ge,shi,bai,sum,m,n,t;
    while(~scanf("%d%d",&m,&n))
    {
        sum=0;
        for(t=m;t<=n;t++)
        {
            bai=t/100;
            shi=t/10%10;
            ge=t%10;
            if(t==bai*bai*bai+shi*shi*shi+ge*ge*ge)
            {
                if(sum==0)
                    {
                        printf("%d",t);
                    }
                else
                {
                    printf(" %d",t);
                }
                sum++;
            }
        }
        if(sum==0)
            {
                printf("no");
            }
        printf("\n");
    }
    return 0;
}
