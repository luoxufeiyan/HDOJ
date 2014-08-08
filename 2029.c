#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int n,ni,len,i,ii,flag;
    scanf("%d",&n);
    getchar();
    for(ni=1;ni<=n;ni++)
    {
        flag=1;
        gets(a);
        len=strlen(a);
        i=len/2;
        for(ii=0;ii<i;ii++)
        {
            if(a[ii]!=a[len-ii-1])
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
}
