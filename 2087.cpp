#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[1010], str2[1010];
	while (~scanf("%s", str1))
	{
		if (str1[0] == '#')
			break;
		scanf("%s", str2);
		int i, j, l1, l2, temp = 0, k;
		l1 = strlen(str1);
		l2 = strlen(str2);
		for (i = 0; i<l1; i++)
		{
			for (k = 0, j = 0; j<l2; j++)
			if (str1[j + i] == str2[j])
				k++;
			if (k == l2)
			{
				temp++;
				i += l2 - 1;
			}   
		}
		printf("%d\n", temp);
	}
	return 0;
}

