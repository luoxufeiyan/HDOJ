#include<stdio.h>
int main()
{
	int n,num,i,year;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&year,&num);
		for(i=0;i!=num;year++)
		{
			if((year%4==0&&year%100!=0)||year%400==0)
				i++;
		}
		printf("%d\n",year-1);
	}
	return 0;
}
