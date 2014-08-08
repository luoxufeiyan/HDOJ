#include<stdio.h>
#include<string.h>
int main()
{
    int n,ni,m,sum;
    char a[1000];
    scanf("%d",&n);
    getchar();
    for(ni=1;ni<=n;ni++)
    {
        sum=0;
        gets(a);
        for(m=0;m<strlen(a);m++)
        {
            if(a[m]<0)
            {
                sum++;
            }
        }
        printf("%d\n",sum/2);
    }
}
