#include <stdio.h>
#include <string.h>
int a[1000010];
int main()
{
    int i,sum,x,y,t,flag;
    memset(a,0,sizeof(a));
    for(i=0;i<1000000;i++)
    {
        t=i;flag=0;
        while(t)
        {
            if(t%10==4||t%100==62)
            {
                flag=1;break;
            }
            else t=t/10;            
        }
        if(flag==1) a[i]=1;
    }
    while(scanf("%d%d",&x,&y)!=EOF)
    {
        sum=0;
        if(x==0&&y==0) break;
        for(i=x;i<=y;i++)
        {
            if(a[i]==0) sum++;
        }
        printf("%d\n",sum);
    }
    return 0;
}
