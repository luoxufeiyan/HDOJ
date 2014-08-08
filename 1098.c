#include<stdio.h>
#include<string.h>
void main()
{
    int n,i,t;
    while(scanf("%d",&n)!=EOF)
    {
        t=0;
        for(i=1;i<=65;i++)
        {
            if((18+n*i)%65==0)
            {
                printf("%d\n",i);
                t++;
            }
        }
        if(t==0)
            printf("no\n");
    }
}
