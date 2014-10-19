#include <stdio.h>
int main()
{
	int a,b,ai,bi,temp;
	while (scanf ("%d %d",&a,&b) != EOF)
	{
		ai = a;
		bi = b;
		while (bi != 0)
		{
			temp = bi;
			bi = ai % bi;
			ai = temp;
		}
		printf ("%d\n",a*b/ai);		
	}
	return 0;
}
