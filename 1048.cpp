#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char passwd[201];
	int i, l, cache;
	while (gets(passwd))
	{
		if (strcmp(passwd, "START") == 0)
			continue;
		if (strcmp(passwd, "END") == 0)
			continue;
		if (strcmp(passwd, "ENDOFINPUT") == 0)
			break;
		l = strlen(passwd);
		for (i = 0; i < l; i++)
		{
			if (passwd[i] >= 70 && passwd[i] <= 90)
			{
				passwd[i] -= 5;
			}
			else if (passwd[i] <= 69 && passwd[i] >= 65)
			{
				passwd[i] += 21;
			}
		}
		for (i = 0; i < l; i++)
		{
			printf("%c", passwd[i]);
		}
		printf("\n");
	}
	return 0;
}
