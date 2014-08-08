#include<stdio.h>
int main()
{
    int d1,d2,n,out1,out2,chg;
    while(scanf("%d%d",&d1,&d2)!=EOF)
    {
        out1=0;
        out2=0;
        if(d1>d2){chg=d1;d1=d2;d2=chg;}
        for(n=d1;n<=d2;n++)
        {
            if(n%2==0)
            {
                out2+=n*n;
            }
            else
            {
                out1+=n*n*n;
            }
        }
        printf("%d %d\n",out2,out1);
    }
}
