#include<stdio.h>
int main()
{
    int x,y,n,i,g,flag;
    scanf("%d%d",&x,&y);
    while(x!=0||y!=0)
    {
        flag=1;
        for(n=x;n<=y;n++)
        {
            i=n*n+n+41;
            g=0;
            for(g=2;g<n;g++)
            {
                if(i%g==0) flag=0;
            }
        }
        if(flag==0)
        {
            printf("Sorry\n");
        }
        else
        {
            printf("OK\n");
        }
    scanf("%d%d",&x,&y);
    }
}
