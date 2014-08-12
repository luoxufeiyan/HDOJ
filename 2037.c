#include<stdio.h>
int main()
{
	int st[100], end[100];
	int n, a, b,i,j;
	int sum = 0, max = 0;
	while (scanf("%d", &n) && n != 0)
	{
		for (i = 0; i < n; i++)
		{
			scanf("%d%d", &st[i], &end[i]);
		}
		for ( i = 0; i < n; i++)
		{
			for (j = i + 1; j<n; j++)
			{
				if (end[i]>end[j])
				{
					a = end[i];
					end[i] = end[j];
					end[j] = a;
					b = st[i];
					st[i] = st[j];
					st[j] = b;
				}
			}
		}
		for (i = 0; i<n; i++)
		if (st[i] >= max)
		{
			sum++;
			max = end[i];
		}
		printf("%d\n", sum);
	}
	return 0;
}
