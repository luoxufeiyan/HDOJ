#include<stdio.h>
#include<string.h>
int main()
{
    int n, ni, a[3], b[3];
    scanf("%d", &n);
    for (ni = 0; ni<n; ni++)
    {
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        scanf("%d%d%d", &a[0], &a[1], &a[2]);
        scanf("%d%d%d", &b[0], &b[1], &b[2]);
        if (a[0]>b[0]) printf("First\n");
        else
        {
            if (a[0] < b[0]) printf("Second\n");
            else
            {
                if (a[1]>b[1]) printf("First\n");
                else
                {
                    if (a[1] < b[1]) printf("Second\n");
                    else
                    {
                        if (a[2]>b[2]) printf("First\n");
                        else
                        {
                            if (a[2] < b[2]) printf("Second\n");
                            else printf("Same\n");
                        }
                    }
                }
            }
        }
    }
    return 0;
}
