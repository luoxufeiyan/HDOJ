#include <stdio.h>
#include<algorithm>
int father[1001];

int FindGF(int a)
{
	while (father[a] != a)
		a = father[a];

	return a;
}

void Branch(int a, int b)
{
	int fx, fy;

	fx = FindGF(a);
	fy = FindGF(b);

	if (fx != fy)
		father[fx] = fy;
}

int main()
{
	int n, m, i, x, y, ans;

	while (scanf("%d", &n) && n != 0)
	{
		for (i = 1; i <= n; i++)
			father[i] = i;

		scanf("%d", &m);

		for (i = 1; i <= m; i++)
		{
			scanf("%d%d", &x, &y);
			Branch(x, y);
		}

		ans = 0;
		for (i = 1; i <= n; i++)
		if (i == father[i])
			ans++;

		printf("%d\n", ans-1);
	}

	return 0;
}