#include<stdio.h>
#include<string.h>
int main()
{
	int n, ni;
	int num[100];
	int a, cache,ci,min;
	while (~scanf("%d", &n)&&n!=0)
	{
		memset(num, 0, sizeof(num));
		for (ni = 0; ni < n; ni++)
		{
			scanf("%d", &num[ni]);
		}
		min = num[0];
		ci = 0;
		for (ni = 1; ni<n; ni++)
		{
			if (num[ni] < min)
			{
				min = num[ni];
				ci = ni;
			}
		}
		cache = num[0];
		num[0] = num[ci];
		num[ci] = cache;
		for (ni = 0; ni < n-1; ni++)
		{
			printf("%d ", num[ni]);
		}
		printf("%d\n", num[n - 1]);
	}
	return 0;
}
