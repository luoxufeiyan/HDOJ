#include<stdio.h>
int main()
{
    int n,money[100],i;
    int sum;
    while(scanf("%d",&n)!=EOF,n!=0)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&money[i]);
            while(money[i]>=100)
            {
                money[i]-=100;
                sum++;
            }
            while(money[i]>=50)
            {
                money[i]-=50;
                sum++;
            }
            while(money[i]>=10)
            {
                money[i]-=10;
                sum++;
            }
            while(money[i]>=5)
            {
                money[i]-=5;
                sum++;
            }
            while(money[i]>=2)
            {
                money[i]-=2;
                sum++;
            }
            while(money[i]>=1)
            {
                money[i]-=1;
                sum++;
            }

        }
        printf("%d\n",sum);
    }
}
