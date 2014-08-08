#include <math.h>
#include <stdio.h>
int main(void)
{
    int i;
    __int64 cache[41][2] = {{0,0}, {1, 2}};

    for (i = 2; i < 41; i++)
    {
        cache[i][0] = cache[i-1][1];
        cache[i][1] = 2 * (cache[i-1][0] + cache[i-1][1]);
    }
    while (scanf("%d", &i) != EOF)
    {
        printf("%I64d\n", cache[i][0] + cache[i][1]);
    }
    return 0;
}
        
