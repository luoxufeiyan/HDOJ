#include<stdio.h>
int main()
{
    int n, ni;
    double a, b, c;
    scanf("%d", &n);
    for (ni = 0; ni < n; ni++)
    {
        scanf("%lf%lf%lf", &a, &b, &c);
        if ((a + b>c) && (a + c > b) && (c + b > a))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
