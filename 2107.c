#include<stdio.h>
int main()
{
    int n,ni,a[100],out;
    while(scanf("%d",&n)&&(n!=0))
    {
        for(ni=0;ni<n;ni++)
        {
            scanf("%d",&a[ni]);
            if(ni==0)
            {
                out=a[ni];
            }
            if(a[ni]>out)
            {
                out=a[ni];
            }
        }
        printf("%d\n",out);
    }
    return 0;
}
    
