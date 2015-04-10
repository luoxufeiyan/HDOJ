#include<stdio.h>
int main()
{
	__int64 n, i, a[21] = { 1, 2 };
	for (i = 2; i<19; i++)
	{
		a[i] = (i + 1)*(a[i - 1] + a[i - 2]);
	}
	while (~scanf("%I64d", &n))
	{
		printf("%I64d\n", a[n - 2]);
	}
	return 0;
}
