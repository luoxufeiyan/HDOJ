#include<stdio.h>
int main()
{
	_int64 i, t = 1, j, n[52];
	n[1] = 3;
	n[2] = n[3] = 1;
	for (i = 4; i<51; i++)
	{
		if (i % 2 == 0)  n[i] = 2 * t + 1;
		else        n[i] = 2 * t - 1;
		t = n[i];
	}
	while (~scanf("%lld", &j))
	{
		if (j == 1)  printf("%d\n", n[1]);
		else
			printf("%lld\n", 6 * n[j]);
	}
	return 0;
}
