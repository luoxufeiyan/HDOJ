#include<stdio.h>
int main()
{
	int n, i, j;
	while (scanf("%d", &n) != EOF)
	{
		j = 0;
		for (i = 1; i <=n; i++)
		{
			if (n%i==0)
			{
				j++;
			}
		}
		if (j % 2 == 0)
		{
			printf("0\n");
		}
		else
		{
			printf("1\n");
		}
	}
	return 0;
}
