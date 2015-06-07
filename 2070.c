#include<stdio.h>
int main()
{
	__int64 a[51]={0,1};
	int s;
	for(s=2;s<=50;s++)
	{
		a[s]=a[s-2]+a[s-1];
	}
	while(scanf("%d",&s)&&s!=-1)
	{
		printf("%I64d\n",a[s]);
	}
	return 0;	
}
