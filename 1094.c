#include<stdio.h>
main()
{
    int n,a,b,i,j,sum;
    sum=0;
    while(scanf("%d\n",&n)!=-1)
    {
    
            for(j=0;j<n;j++)
             {
                 scanf("%d",&a);
                 sum+=a;
             }
             printf("%d\n",sum);
             sum=0;
        
    }
}
