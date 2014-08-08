#include<stdio.h>
int fun(int m, int n)
{
    int i;
    if (m<n)
    {
        m ^= n ^= m = m^n;
    }
    for (i = m;; i++)
    if (i%m == 0 && i%n == 0) break;
    return i;
}
int main()
{
    int n, m, i, k;
    while (~scanf("%d", &n))
    {
        k = 1;
        for (i = 0; i<n; i++)
        {
            scanf("%d", &m);
            k = fun(m, k);
        }
        printf("%d\n", k);
    }
    return 0;
}
