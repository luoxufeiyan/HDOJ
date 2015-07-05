#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
int cmp(const void*a ,const void*b)
{
	return *(int *)b-*(int *)a;
}
int main()
{
	int i,n;
	int tian,king;
	int fa,fb,la,lb;
	while(~scanf("%d",&n)&&n!=0)
	{
		int a[1001]={0},b[1001]={0};
		getchar();
		tian=king=0;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
			scanf("%d",&b[i]);
		qsort(a,n,sizeof(int),cmp);
		qsort(b,n,sizeof(int),cmp);
		fa=fb=0;
		la=lb=n-1;
		while(fa!=la)
		{
			if(a[fa]>b[fb])
			{
				tian++;
				fa++;
				fb++;
			}
			else if(a[la]>b[lb])
			{
				tian++;
				la--;
				lb--;
			}
			else if(a[la]<b[fb])
			{
				king++;
				la--;
				fb++;
			}
			else
				break;
		}
		if(a[fa]>b[fb])
			tian++;
		else if(a[fa]<b[fb])
			king++;
		printf("%d\n",(tian-king)*200);
	}
return 0;
}
