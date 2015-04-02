#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	_int64 fibn[51] = {1,2,3};
	int i,j;
	while (~scanf("%d", &i))
	{
		for (j = 3; j < 51; j++)
		{
			fibn[j] = fibn[j - 1] + fibn[j - 2];
		}
		printf("%I64d\n", fibn[i-1]);
	}
	return 0;
}
