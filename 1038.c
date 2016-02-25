#include<stdio.h>
#define Pi 3.1415927

int main()
{
	int n,c=0;
	double t,d,v,s;
	while(scanf("%lf%d%lf",&d,&n,&t)!=EOF && n!=0)
	{
		s=n*Pi*d/12/5280;
		v=s/(t/60/60);
		printf("Trip #%d: %.2lf %.2lf\n",++c,s,v);
	}
		return 0;
}
