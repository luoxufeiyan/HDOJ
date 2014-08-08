#include<stdio.h>
int main()
{
    int n,ni,j,ji,a[20],sum;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&j);
        sum=0;
            for(ji=0;ji<j;ji++)
        {
            scanf("%d",&a[ji]);
            sum+=a[ji];
        }
        printf("%d\n",sum-j+1);
    }
    return 0;
}
