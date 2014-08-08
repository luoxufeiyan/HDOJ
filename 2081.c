# include <stdio.h>
char str[15] ;
int main ()
{
    int n ;
    scanf ("%d%*c", &n) ;
    while (gets(str))
        printf ("6%s\n", str+6) ;
    return 0 ;
}
