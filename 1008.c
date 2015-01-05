#include<stdio.h>
int main()
{
	int n;
	while (~scanf("%d", &n)&&n!=0)
	{
		int f, fi,j, sum;
		f = sum = 0;
		for (j = 0; j < n; j++)
		{
			fi = f;
			scanf("%d", &f);
			if (fi < f)
			{
				sum += 6 * (f - fi);
			}
			else if(fi>f)
			{
				sum += 4 * (fi - f);
			}
			//if (j!=n-1)注意最后也要停五秒
				sum += 5;
		}
		printf("%d\n", sum);
	}
	return 0;
}
