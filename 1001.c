#include<stdio.h>
main()
{
    int n,i,sum;
    sum=0;
    while((scanf("%d",&n)!=-1))
    {
        sum=0;
        for(i=0;i<=n;i++)

            sum+=i;


    printf("%d\n\n",sum);
    }
}
