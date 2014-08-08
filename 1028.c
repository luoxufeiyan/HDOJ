#include<stdio.h>
int main()
{
    int a[125][125]={0},n,i,j;
    for(i=1;i<125;i++)    a[1][i]=a[i][1]=1;
    for(i=2;i<125;i++)
        for(j=2;j<125;j++)
        {
            if(i==j)    a[i][j]=a[i][j-1]+1;
            if(i>j)        a[i][j]=a[i-j][j]+a[i][j-1];
            if(i<j)        a[i][j]=a[i][i];
        }
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",a[n][n]);
    }
    return 0;
}
