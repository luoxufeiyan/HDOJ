#include<stdio.h>
int main()
{
    int n,ni,j,ji;
    double num[100],ans;
    scanf("%d",&n);
    for(ni=0;ni<n;ni++)
    {
        scanf("%d",&j);
        ans=0;
        for(ji=0;ji<j;ji++)
        {
            scanf("%lf",&num[ji]);
            if(ji==0||num[ji]>ans)
            {
                ans=num[ji];
            }
        }
        printf("%.2lf\n",ans);
    }
    return 0;
}
