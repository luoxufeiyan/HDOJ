#include<stdio.h>
int main()
{
    int n, ni, goat, st,sti;
    scanf("%d", &n);
    for (ni = 0; ni < n; ni++)
    {
        goat = 3;
        scanf("%d", &st);
        for (sti = 0; sti < st; sti++)
        {
            goat = goat - 1;
            goat = goat * 2;
        }
        printf("%d\n", goat);
    }
}
