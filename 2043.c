#include<stdio.h>
#include<string.h>
int main()
{
    int n, ni, l;
    int q, w, e, r;
    char a[50];
    scanf("%d", &n);
    getchar();
    while (n--)
    {
        memset(a, 0, sizeof(a));
        q = w = e = r = 0;
        gets(a);
        ni = l= strlen(a);
        ni--;
        while (a[ni]!='\0')
        {
            if (a[ni] >= 65 && a[ni] <= 90)//大写字母
                q = 1;
            if (a[ni] >= 97 && a[ni] <= 122)//小写字母
                w = 1;
            if (a[ni] >= 48 && a[ni] <= 57)//数字
                e = 1;
            if (a[ni] == 126 || a[ni] == 33 || a[ni] == 64 || a[ni] == 35 || a[ni] == 36 || a[ni] == 37 || a[ni] == 94)//特殊符号
                r = 1;
            ni--;
        }
        if (q+w+e+r >= 3&&l>=8&&l<=16)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
