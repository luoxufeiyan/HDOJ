#include<stdio.h>
int main()
{
    int n,t,sum=1,a[1000];
    while(scanf("%d",&n)!=EOF)
    {
        sum=1;
        for(t=0;t<n;t++)
        {
           scanf("%d",&a[t]);
           if(a[t]%2==1)
               sum=sum*a[t];
        }
        printf("%d\n",sum);
    }
    return 0;

}
