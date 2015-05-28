#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
const int maxN = 10001;

int n, m, n2, m2;
int father[maxN], PT[maxN], isCircle[maxN];
//memset(0, isCircle, sizeof(isCircle));
struct node
{
	int num, isCircle;
	friend bool operator < (node a, node b)
	{
		if (a.num != b.num) return a.num>b.num;
		return a.isCircle>b.isCircle;
	}
}an[maxN], bn[maxN];

int findset(int x)
{
	if (x == father[x]) return x;
	return father[x] = findset(father[x]);
}
void Union(int x, int y)
{
	x = findset(x); y = findset(y);
	if (x == y) 
	{
		isCircle[x] = 1;
		return;
	}
	if (PT[x]>PT[y])
	{
		father[y] = x;
		PT[x] += PT[y];
	}
	else
	{
		father[x] = y;
		PT[y] += PT[x];
	}
}

int main()
{
	int t, ncase = 1;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d%d", &n, &m);
		memset(isCircle, 0, sizeof(isCircle));
		for (int i = 1; i <= n; i++) father[i] = i, PT[i] = 1;
		int u, v;
		for (int i = 0; i<m; i++)
		{
			scanf("%d%d", &u, &v);
			Union(u, v);
		}
		int cnt = 0, cnt2 = 0;
		for (int i = 1; i <= n; i++) if (father[i] == i)
		{
			an[cnt].num = PT[i]; an[cnt].isCircle = isCircle[i];
			cnt++;
		}
		sort(an, an + cnt);

		scanf("%d%d", &n2, &m2);
		//clear array!
		memset(isCircle, 0, sizeof(isCircle));
		for (int i = 1; i <= n2; i++) father[i] = i, PT[i] = 1;
		for (int i = 0; i<m2; i++)
		{
			scanf("%d%d", &u, &v);
			Union(u, v);
		}
		for (int i = 1; i <= n2; i++) if (father[i] == i)
		{
			bn[cnt2].num = PT[i]; bn[cnt2].isCircle = isCircle[i];
			cnt2++;
		}
		sort(bn, bn + cnt2);

		printf("Case #%d: ", ncase++);
		if (n != n2 || m != m2 || cnt != cnt2) 
		{ 
			printf("NO\n");
			continue;
		}
		int flag = 0;
		for (int i = 0; i<cnt; i++)
		{
			if (an[i].num != bn[i].num)
			{
				flag = 1;
				break;
			}
			if (an[i].isCircle != bn[i].isCircle)
			{
				flag = 1;
				break;
			}
		}
		if (flag) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}