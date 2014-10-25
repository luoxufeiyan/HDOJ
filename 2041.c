#include <stdio.h>
int main()
{
	int n,m,i;
	int num[40]={1,2};
	scanf("%d",&n);
	for(i=2;i<40;i++)
		{
			num[i]=num[i-2]+num[i-1];
		}
	while(n--)
	{
		scanf("%d",&m);
		printf("%d\n",num[m-2]);
	}
	return 0;
}
