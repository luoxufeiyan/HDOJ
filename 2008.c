#include<stdio.h>
int main()
{
    int n,x,zheng,fu,ling;
    double a;
    while(scanf("%d",&n)!=EOF&&n)
    {
        zheng=fu=ling=0;
        for(x=0;x<n;x++)
        {
            scanf("%lf",&a);
            if(a<0)
                fu++;
            else if (a>0)
                zheng++;
            else
                ling++;
        }
        printf("%d %d %d\n",fu,ling,zheng);
    }
    return 0;
}
