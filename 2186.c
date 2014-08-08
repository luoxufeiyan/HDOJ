# include <stdio.h>
int main ()
{
    int n, T, a, b, c, ans ;
    scanf ("%d", &T) ;
    while (T--)
    {
        scanf ("%d", &n) ;
        a = n/2 ;
        b = (n-a)*2/3 ;
        c = n-a-b ;
        ans = (a-1)/10 + (b-1)/10 + (c-1)/10 + 3 ;
        printf ("%d\n", ans) ;
    }
    return 0 ;
}
