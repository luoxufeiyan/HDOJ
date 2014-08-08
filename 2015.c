#include<stdio.h>
int main()
{
    int m,n,i,num,x,sum;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        num=0;x=2;sum=0;
        while (n)
        {
            sum=sum+x;
            num++;
            if(n==1) {printf("%d\n",sum/num);}
            else if(num==m) {printf("%d ",sum/num);sum=0;num=0;}
            x+=2;
            n--;
        }
    }
    return 0;
}
