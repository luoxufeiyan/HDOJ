#include<stdio.h>

int main()
{
    int n,k,i;
    while(scanf("%d",&n)!=EOF)
    {
        k=0;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
                k++;
        }
        if(k%2==0)
            printf("0\n");
        else
            printf("1\n");
    }
    return 0;
}
