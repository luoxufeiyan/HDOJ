#include<cstdio>
#include<cstring>
#include<cmath>
int c1[1000],c2[10000];
int main()
{
	int n1,n2,n5;
	while(scanf("%d%d%d",&n1,&n2,&n5)==3,n1+n2+n5)
	{
		int n,i,j,k;
		n=n1+n2*2+n5*5;
		for(i=0;i<=n;i++)//init c1 c2
		{
			c1[i]=0;c2[i]=0;
		}
		for(i=0;i<=n1;i++)//只有 1
		{
			c1[i]=1;
		}
		for(i=0;i<=n1;i++)//存在1和2
		{
			for(j=0;j<=n2*2;j+=2)
			{
				c2[i+j]+=c1[i];
			}
		}
		for(k=0;k<=n1+n2*2;k++)
		{
			c1[k]=c2[k];c2[k]=0;
		}
		for(j=0;j<=n1+n2*2;j++)//存在1、2、5
		{
			for(k=0;k<=n5*5;k+=5)
			{
				c2[k+j]+=c1[j];
			}
		}
		for(i=0;i<=5*n5+2*n2+n1;i++)
		{
			c1[i]=c2[i];c2[i]=0;
		}
		bool flag=0;
		for(i=0;i<=n;i++)
		{
			if(c1[i]==0)
			{
				printf("%d\n",i);
				flag=1;
				break;
			}
		}
			if(!flag)
				printf("%d\n",n+1);
		}
		return 0;
	}
