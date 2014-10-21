//快速幂取余，简单版本
#include<stdio.h>
int main()
{
	int a, b;
	while (scanf("%d %d", &a, &b) && (a + b))
	{
		int i, s = a;
		for (i = 0; i<b - 1; i++)
			s = s*a % 1000;
		printf("%d\n", s);
	}
	return 0;
}
