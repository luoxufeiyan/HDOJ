#include <ctype.h>
#include <stdio.h>
int main(void)
{
    int n, d, i;
    char cache[64];
    scanf("%d%*c", &n);
    while (n--)
    {
        gets(cache);
        if (cache[0] != '_' && !isalpha(cache[0]))
        {
            puts("no");
            continue;
        }
        for (d=i=1;cache[i];i++)
        {
            if (!isalnum(cache[i])&&cache[i] != '_')
            {
                d = 0;
                break;
            }
        }
        puts(d ? "yes" : "no");
    }
    return 0;
}
