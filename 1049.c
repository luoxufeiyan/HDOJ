#include<stdio.h>
int main()
{
	int n, u, d, route, t;
	while (scanf("%d%d%d", &n, &u, &d) && n)
	{
		t = 0;
		route = n;
		while (1)
		{
			route -= u;
			t++;
			if (route <= 0)
				break;
			route += d;
			t++;
		}
		printf("%d\n", t);
		n = u = d = 0;
	}
	return 0;
}
