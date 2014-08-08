#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,k,cache;
    double num[100];
    while(~scanf("%d",&n),n!=0)
    {
        for(i=0;i<n;i++)
        {
            scanf("%lf",&num[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                if(fabs(num[j])>fabs(num[i]))
                {
                    cache=num[i];
                    num[i]=num[j];
                    num[j]=cache;
                }
            }
        }
        for(i=0;i<n;i++)
        {
        if(i>0)
        {
            printf(" ");
        }
            printf("%.0lf",num[i]);
        }
        printf("\n");
    }
    return 0;
}
