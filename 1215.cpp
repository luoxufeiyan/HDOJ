#include<stdio.h>
#include<math.h>
void main()
{
	int T,N,t,sum,i,k;
	while(~scanf("%d",&T))
	{
		while(T--)
		{
			sum=0;
			scanf("%d",&N);
			t=N;
			for(i=1;i<t;i++)
			{
				if(N%i==0)
				{
					sum+=i;
					k=i;
					t=N/i;
					if((i-1)&&t!=k)
					sum+=t;
				}
			}
			printf("%d\n",sum);
		}
	}
}