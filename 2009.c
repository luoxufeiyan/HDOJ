#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i;
    double sum,k;
    while(~scanf("%d %d",&n,&m)&&n<10000&&m<1000)
    {
        sum=0;
        k=n;
        for(i=1;i<=m;i++)
        {
            sum+=k;
            k=sqrt(k);
        }
        printf("%.2lf\n",sum);
    }
    return 0;
}
