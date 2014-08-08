#include<stdio.h>
int main()
{
    int n,i,a[100],j,t;
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        j=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]<=a[j])
                j=i;
        }
        t=a[0];
        a[0]=a[j];
        a[j]=t;
        for(i=0;i<n;i++)
        {
            if(i>0) printf(" ");
            printf("%d",a[i]);
        }
        printf("\n");
    }
    return 0;
}
 
