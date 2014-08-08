#include<stdio.h>
int main()
{
    int amount,num[2000],a,t,i,cache,b,o;
    scanf("%d",&amount);
    for(t=0;t<amount;t++)
    {
        scanf("%d",&a);
        for(i=0;i<a;i++)
        {
            scanf("%d",&num[i]);
        }
        for(b=0;b<a-1;b++)
        {
            for(i=0;i<a-1-b;i++)
            {
            if(num[i]>num[i+1])
            {
                cache=num[i];
                num[i]=num[i+1];
                num[i+1]=cache;
            }
            }
        }
        for(i=0;i<a-1;i++)
        {
            printf("%d ",num[i]);
        }
        printf("%d\n",num[a-1]);
    }
return 0;
}
