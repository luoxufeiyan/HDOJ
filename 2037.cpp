#include<stdio.h>
#include<utility>
#include<algorithm>
#define MAX 1000
using namespace std;
pair<int, int> p[MAX];
int main()
{
	int n;
	int s, e;
	while (scanf("%d", &n)>0 && n)
	{
		for (int i = 0; i<n; i++)
		{
			scanf("%d %d", &s, &e);
			p[i].first = e;
			p[i].second = s;
		}
		sort(p, p + n);
		int t = 0, ans = 0;
		for (int i = 0; i<n; i++)
		{
			if (t <= p[i].second)
			{
				ans++;
				t = p[i].first;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
