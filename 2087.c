#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1001], str2[1001];
    while (scanf("%s %s", &str1, &str2) != EOF)
    {
        int b;
        int i, ans = 0;
        char *p;

        if (str1[0] == '#')
            break;

        b = strlen(str2);

        while (p = strstr(str1, str2))
        {

            for (i = 0; i<b; i++)
                p[i] = 1;

            ans++;
        }


        printf("%d\n", ans);

    }

    return 0;
}
