#include<stdio.h>
int main()
{
    int a[32][32]={{1},{0,1},{0,1,1}},i,j,n;
     while(~scanf("%d",&n))
     {
     for(i=1;i<=n;i++)
        for(j=1;j<=i;j++)
        {
          a[i][j]=a[i-1][j]+a[i-1][j-1];
          if(j!=i)
          {
              printf("%-d ",a[i][j]);
          }
          else 
              printf("%d\n",a[i][j]);
        }
     printf("\n");
     }
     return 0;
}
