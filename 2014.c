#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,k,j,i;
    double sum,a[100];
    double avg;
    while(scanf("%d",&n)!=EOF&&n>2&&n<=100)
    {
        sum=n;
        i=j=k=0;
        while(sum--&&scanf("%lf",&a[i++])!=EOF);
        sum=0;
        sort(a,a+n);
        for(i=1;i<n-1;i++)
        {
            sum=sum+a[i];
        }
        avg=sum/(n-2);
        printf("%.2lf\n",avg);
    }
    return 0;
}
