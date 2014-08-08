#include<stdio.h>
#include<string.h>
int main()
{
    int n, m;
    int i, j;
    int t, d;
    int list[50][5], stu[50], avg[5];
    while (scanf("%d%d", &n, &m) != EOF)
    {
        memset(list, 0, sizeof(list));
        memset(stu, 0, sizeof(stu));
        memset(avg, 0, sizeof(avg));
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                scanf("%d", &list[i][j]);
                avg[j] += list[i][j];
                stu[i] += list[i][j];
            }
        }
        for (i = 0; i < n; i++)
            printf("%.2lf%c", stu[i] *1.0/ m, i < n - 1 ? ' ' : ' \n');
        for (j = 0; j < m; j++)
            printf("%.2lf%c", avg[j] *1.0/ n, j< m - 1 ? ' ' : ' \n');
        for (t = i = 0; i < n; i++)
        {
            for (d = 1, j = 0; j < m; j++)
            {
                if (list[i][j] < 1.0 * avg[j] / n)
                {
                    d = 0;
                    break;
                }
            }
            if (d) t++;
        }
        printf("%d\n\n", t);
    }
    return 0;
}
