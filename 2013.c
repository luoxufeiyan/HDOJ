#include<stdio.h>
int main()
{
    int n,chi,sum,i,j;
    while(~scanf("%d",&n)&&n>1&&n<30)
    {
        sum=4;
        for(i=2;i<n;i++)
        {
            sum=(sum+1)*2;
        }
        printf("%d\n",sum);
    }
    return 0;
}
