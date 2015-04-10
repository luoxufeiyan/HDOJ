#include<stdio.h>
int main()
{
	int a, b, n, i;
	_int64 cell[52] = { 1, 1, 2 };
	for (i = 3; i<51; i++)
		cell[i] = cell[i - 1] + cell[i - 2];
	while (~scanf("%d", &n))
	{
		while (n--)
		{
			scanf("%d%d", &a, &b);
			printf("%lld\n", cell[b - a]);
		}
	}
	return 0;
}
