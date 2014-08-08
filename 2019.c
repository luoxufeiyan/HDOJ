#include<stdio.h>
int main()
{
    int n,j,num,cache;
    while(~scanf("%d%d",&n,&num),n&&num!=0)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&cache);
            if(cache<num)
            {
                printf("%d ",cache);
            }
            else
            {
                printf("%d ",num);
                printf("%d",cache);
                break;
            }
        }
        for(;j<n-1;j++)
        {
            scanf("%d",&cache);
            printf(" %d",cache);
        }
    printf("\n");
    }
return 0;
}
