#include<stdio.h>
#include<string.h>
int main()
{
    int two[1000], cache, len, i;
    while (~scanf("%d", &cache))
    {
        memset(two, 0, sizeof(two));
        i = 0;
        while (cache !=0)
        {
            two[i] = cache % 2;
            cache = cache / 2;
            i++;
        }
        len = i;
        for (i = (len-1); i >= 0; i--)
        {
            printf("%d", two[i]);
        }
        printf("\n");
    }
    return 0;
}
