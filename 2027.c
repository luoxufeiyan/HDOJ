#include<stdio.h>
#include<string.h>
int main()
{
    int num[5] = { 0 }, len, leni, t, ti;
    char cache[100] = { 0 };
    scanf("%d\n", &t);
    for (ti = 0; ti < t; ti++)
    {
        gets(cache);
        memset(num, 0, sizeof(num));
        len = strlen(cache);
        for (leni = 0; leni < len; leni++)
        {
            if (cache[leni] == 'a') {num[0]++; }
            if (cache[leni] == 'e') {num[1]++; }
            if (cache[leni] == 'i') {num[2]++; }
            if (cache[leni] == 'o') {num[3]++; }
            if (cache[leni] == 'u') {num[4]++; }
        }
        printf("a:%d\n", num[0]);
        printf("e:%d\n", num[1]);
        printf("i:%d\n", num[2]);
        printf("o:%d\n", num[3]);
        printf("u:%d\n", num[4]);
        if (ti != t - 1)
        {
            printf("\n");
        }
    }
    return 0;
}
